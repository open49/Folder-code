#include <iostream>
using namespace std;
struct student{
	string name;
	int age;
	int score;
};
int main (){
	int n; 
	cin>>n;
	student * students = new student[100];
	for(int i =0 ; i<n; i++){
		cin>>students[i].name >>students[i].age>>students[i].score;
		
	}
	student s = students[0];
	for (int i = 1; i<n; i++){
		if (students[i].score > s.score){
		s= students[i];
	}
	}
	cout << " name : "<< s.name <<endl;
	cout<< " age : "<<s.age <<endl ;
	cout<<" score :"<< s.score ;
	delete[] students;
	return 0;
}
