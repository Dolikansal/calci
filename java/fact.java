import java.util.Scanner;
public class fact {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int ans = 1;
        for(int i = 1 ; i<= a ; i++){
            ans = ans * i;
        }
        System.out.println("fact is: " + ans);
    }
}
