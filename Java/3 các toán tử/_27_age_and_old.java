import java.util.Scanner;
public class _27_age_and_old {

        public static void main(String[] args) {
            Scanner sc =new Scanner(System.in);
            String name = sc.next();
            int age = sc.nextInt();
            System.out.println("in 15 years age of " + name + " will be " + (age+15) + "years old");
            sc.close();
        }

}
