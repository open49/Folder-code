import java.util.Scanner;
public class _25_chia_lay_phan_du {

    public static void main(String[] args) {
        System.out.println(5%3);
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println("a % b = " + (a%b));
        //!code mau khong su dung toan tu %
        System.out.println(a-b*(a/b));
        sc.close();
    }
    
}