public class multiple_catch {
    public static void main(String[] args) {
        try{
            int []arr = new int[5];
            arr[10] = 10;
            int res = 10 / 0;
        }
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println("array index out of bound");
        }
        catch(ArithmeticException e){
            System.out.println("divosion by zero");
        }
        catch(Exception e){
            System.out.println("an error occured: " +e.getMessage());
        }
    }
}
