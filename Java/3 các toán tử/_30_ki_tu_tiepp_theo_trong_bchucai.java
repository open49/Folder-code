import java.util.Scanner;
public class _30_ki_tu_tiepp_theo_trong_bchucai {

        public static void main(String[] args) {
            //? example : gán kí tự vào 1 biến khác
            Scanner sc =new Scanner(System.in);
            //char c = sc.next().charAt(0);
            
            //? ki tu tiep theo trong bang chu cai
            char c = (char)(sc.next().charAt(0)+1);
            System.out.println(c);
            sc.close();
        }
}
