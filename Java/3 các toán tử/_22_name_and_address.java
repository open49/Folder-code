//scanner khong doc duoc nhung khoang trang
        //vi du input :tuan dep zai =>> output : tuan
        //de nhap duoc nhung khoang trng can ung phuong thuc nextline()
        import java.util.Scanner;

        public class _22_name_and_address {
            public static void main(String[] args) {
                Scanner sc = new Scanner(System.in);
                String name = sc.next();
                String address = sc.next();
                System.out.println("Name: " + name);
                System.out.println("Address: " + address);
                sc.close();
            }
        }