import java.util.Scanner;
public class throw_key {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();

        try{
            if(b == 0){
                throw new ArithmeticException();
            }
            System.out.println(a/b);
        }
        catch(Exception e){
            e.printStackTrace();
            // System.out.println(e.getMessage());
        }
    }
}
