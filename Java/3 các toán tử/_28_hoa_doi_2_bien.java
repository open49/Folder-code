import java.util.Scanner;

    public class _28_hoa_doi_2_bien {

            public static void main(String[] args) {
                Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = a;
        a = b;
        b = c;
        System.out.println("after switch a =" + a +" b= " + b);
        sc.close();
            }
}