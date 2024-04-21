Lý thuyết
Để nhập được dữ liệu từ bàn phím bạn cần tạo ra đối tượng thuộc lớp Scanner trong package java.util.Scanner. Xem ví dụ về chương trình nhập dữ liệu từ bàn phím và hiển thị ra màn hình:

import java.util.Scanner;

public class Input {
	public static void main(String[] args) {
		// Tạo ra đối tượng sc thuộc lớp Scanner để nhập dữ liệu
		Scanner sc = new Scanner(System.in);
		String name = sc.next();
		System.out.println("Hello " + name);
	}
}
Khi chạy chương trình trên nếu bạn nhập Kien và bấm phím Enter thì màn hình sẽ hiển thị ra:

Hello Kien
Bạn cần thêm câu lệnh import java.util.Scanner; vì lớp Scanner nằm trong package này (bạn sẽ hiểu rõ hơn về lớp và đối tượng trong khóa học lập trình Java hướng đối tượng). Tương tự, bạn có thể nhập dữ liệu cho các biến kiểu int, double, char, ... với đối tượng sc giống như sau:

import java.util.Scanner;

public class Input {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String name = sc.next();
		int age = sc.nextInt();
		double gpa = sc.nextDouble();
		System.out.println("Name: " + name);
		System.out.println("Age: " + age);
		System.out.println("Grade Point Average: " + gpa);
	}
}
Trong ví dụ trên nếu bạn nhập:

Nam
19
7.7
Thì màn hình sẽ hiển thị ra:

Name: Nam
Age: 19
Grade Point Average: 7.7
Đọc tới đây bạn đã biết cách sử dụng đối tượng thuộc lớp Scanner để nhập dữ liệu, hãy quay lại phần bài tập và làm thử.

Hướng dẫn
Code mẫu:

import java.util.Scanner;

public class Input {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Hello " + sc.next());
	}
}

import java.util.Scanner;

public class _21_hello_name {
    

     public static void main(String[] args) {
        Scanner sc = new Scanner(system.in);
        System.out.println("Hello " + sc.next());

     }
}
