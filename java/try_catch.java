import java.util.Scanner;
public class try_catch {
    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in);
        int a = 15;
        int b = sc.nextInt();

        try{
            int ans = a/b;
            System.out.println(ans);
        }
        catch(Exception e){
            System.out.println(e.getMessage());
        }

        finally{
            System.out.println("i will execute");
        }
    }
}
