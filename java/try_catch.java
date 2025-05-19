public class try_catch{
    public static void main(String[] args) {
        int num1 = 15;
        int num2 = 0;
        int ans ;
        try{
            ans = num1 / num2;
            System.out.println("result is: " + ans);
        }
        catch(ArithmeticException e){
            System.out.println("Error => cant divide by zero");
        }

        System.out.println("continue.....");
    }
}