//nho doi ten
/*Bài tập
Bạn hãy viết chương trình hiển thị ký tự 'd' ra màn hình.

Lý thuyết
Mục đích của bài này là giúp bạn hiểu hơn về kiểu ký tự nên hãy tìm cách điền code vào dấu ... để màn hình hiển thị ra ký tự 'd'.

Kiểu ký tự bản chất là một kiểu số nguyên, bạn có thể hiện thị giá trị nguyên của một ký tự bằng câu lệnh (int)ký_tự; giống như chương trình sau:
*/
public class _17_kieu_ky_tu {
	public static void main(String[] args) {
		System.out.println("a = " + (int) 'a');
		System.out.println("b = " + (int) 'b');
		System.out.println("c = " + (int) 'c');
		System.out.println("...");
		System.out.println("x = " + (int) 'x');
		System.out.println("y = " + (int) 'y');
		System.out.println("z = " + (int) 'z');
	

/*Kết quả khi chạy chương trình:

a = 97
b = 98
c = 99
...
x = 120
y = 121
z = 122
Từ kết quả trên có thể thấy, giá trị số của các chữ cái từ 'a' đến 'z' là tăng dần, 
mỗi giá trị liên tiếp cách nhau 1 đơn vị.
Do kiểu ký tự là một kiểu số nguyên nên bạn có thể áp dụng các phép toán +, -, *, /. 
Từ đoạn code bên trên có thể thấy để hiển thị ký tự 'd' bạn có thể lấy ký tự 'a' + 3, 
để hiển thị ký tự 'e' bạn có thể lấy ký tự 'd' + 1 như chương trình sau:
*/

		char d = 'a' + 3;
		char e = 'd' + 1;
		System.out.println(d);
		System.out.println(e);
	

/*Màn hình sẽ hiển thị ra:

d
e
Đọc tới đây bạn đã có thể làm được bài này, hãy quay lại phần bài tập và làm thử.

Nếu bạn chưa làm được thì có thể xem hướng dẫn bên dưới

Hướng dẫn
Code mẫu:
*/
		char g = 'a' + 3;
		System.out.println(g);
	}
}