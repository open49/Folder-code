import java.util.Scanner;

public class _21_hello_name {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Hello " + sc.next());
        sc.close();
	}
}/*
     * de nhap duoc du lieu tu ban phim ban
     * can tao ra doi tuong thuoc lop scanner
     * trong
     *package java.until.scanner

     ****************ex
     import java.util.scanne;
     public class input{
        public static void main (string[] args){
            scannersc = new scanner(system.in);
            string name = sc. next();
            system.out.println("hello" + name);

        }
     }


     input = tuan dep zai
output = hello tuandep zai 


     *****************
     scanner co the dung cho cac kieu int double strign 
     exxxx:

     public class input{
        public claas void main (string[ ] args){
            scanner sc = new scanner (system.in);

            string name = sc.nexxt()
            int age = sc.next();
            double gpa = sc.nextDouble();
            system.out.printl("name: " + name );
            system.out.println("age " +age);
            system.out.println ("grade point average" +gpa);



        }
     }
     */