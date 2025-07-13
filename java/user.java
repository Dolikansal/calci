import java.util.Scanner;
public class user {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter first num");
        int a = sc.nextInt();
        System.out.println("enter second num");
        int b = sc.nextInt();

        int ans = a + b;
        System.out.println("sum is: " + ans);
        }
}
