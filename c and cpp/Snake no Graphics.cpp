
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<Windows.h>

#define consoleWidth 25
#define consoleHeight 25

void TextColor (int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE) , color);
}

void clrscr(void)
{
CONSOLE_SCREEN_BUFFER_INFO csbiInfo; 
HANDLE hConsoleOut;
COORD Home = {0,0};
DWORD dummy;

hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
GetConsoleScreenBufferInfo(hConsoleOut,&csbiInfo);

FillConsoleOutputCharacter(hConsoleOut,' ',csbiInfo.dwSize.X * csbiInfo.dwSize.Y,Home,&dummy);
csbiInfo.dwCursorPosition.X = 0; 
csbiInfo.dwCursorPosition.Y = 0; 
SetConsoleCursorPosition(hConsoleOut,csbiInfo.dwCursorPosition); 
}
void gotoXY(short x,short y)
{
HANDLE hConsoleOutput;
COORD Cursor_an_Pos = { x,y};
hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(hConsoleOutput , Cursor_an_Pos);
}

using namespace std;
enum TrangThai { up, down, left, right };

struct ToaDo
{
	int x, y;
};

struct Snake
{
	ToaDo dot[50];
	int n;
	TrangThai tt;
};

struct HoaQua
{
	ToaDo td;
};

void KhoiTao(Snake &snake,HoaQua &hq)
{
	snake.n = 1;
	snake.dot[0].x = 0;
	snake.dot[0].y = 0;
	snake.tt = down;
	hq.td.x = 7;
	hq.td.y = 7;
}


void HienThi(Snake snake, HoaQua hq)
{
	clrscr();
	TextColor(8);
	for(int i=0;i<consoleHeight;i++)
	{
		gotoXY(consoleWidth,i);
		putchar (179);
	}
	TextColor(11);
	gotoXY(hq.td.x,hq.td.y);
	putchar('@');
	TextColor(12);
	gotoXY (snake.dot[0].x,snake.dot[0].y);
	putchar(2);
	for (int i = 1; i < snake.n; i++)
	{
		gotoXY(snake.dot[i].x, snake.dot[i].y);
		putchar('#');
	}
}

void DieuKhien(Snake &snake)
{

	for (int i = snake.n - 1; i > 0; i--)
		snake.dot[i] = snake.dot[i - 1];
	if (kbhit())
	{
		int key = _getch();

		if (key == 'a' || key == 'A')
			snake.tt = left;
		else
			if (key == 'w' || key == 'W')
				snake.tt = up;
			else
				if (key == 'S' || key == 's')
					snake.tt = down;
				else
					if (key == 'd' || key == 'D')
						snake.tt = right;
	}
	if (snake.tt == up)
		snake.dot[0].y--;
	else if (snake.tt == down)
		snake.dot[0].y++;
	else if (snake.tt == left)
		snake.dot[0].x--;
	else if (snake.tt == right)
		snake.dot[0].x++;
}
//
int Xuly(Snake &snake,HoaQua &hq, int &thoigian)
{
	if(snake.dot[0].x <0||snake.dot[0].x>=consoleWidth||
	snake.dot[0].y<0||snake.dot[0].y>=consoleHeight)
	return -1;
	for(int i=1;i<snake.n;i++)
		if(snake.dot[0].x==snake.dot[i].x&&snake.dot[0].y==snake.dot[i].y)
		return -1;
	if(snake.dot[0].x==hq.td.x&&snake.dot[0].y==hq.td.y)
	{
		for(int i=snake.n;i>0;i--)
			snake.dot[i]=snake.dot[i-1];
		snake.n++;
		if (snake.tt == up)
		snake.dot[0].y--;
	else if (snake.tt == down)
		snake.dot[0].y++;
	else if (snake.tt == left)
		snake.dot[0].x--;
	else if (snake.tt == right)
		snake.dot[0].x++;
		
		hq.td.x= rand() % consoleWidth;
		hq.td.y= rand() % consoleHeight;
		if(thoigian>50)
		thoigian -= 5;
	}
	
}

int main()
{	
	int ma;
	int thoigian=200;
	srand(time(NULL));
	HoaQua hq;
	Snake snake;
	KhoiTao(snake,hq);
	while (1)
	{

		HienThi(snake,hq);
		gotoXY(35,2);
		printf("game cua tuan dz \t");
		printf("dung a,w,s,d de di chuyen nhe cac em");

		DieuKhien(snake);

		ma=Xuly(snake, hq,thoigian);

		if(ma==-1)
		{
			gotoXY(consoleWidth +1 , 10);
			printf("oc cho");
			while(_getch()!=13);
			break;
		}

		Sleep(thoigian);
	}

	return 0;
}
