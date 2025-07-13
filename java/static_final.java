public class static_final {
    final int MAX_VALUE = 100;
    static int count = 0;
    final static double PI = 3.14159;
    
    static void incrementCount() {
        count++;
        System.out.println("Count is now: " + count);
    }
    
    final void displayMaxValue() {
        System.out.println("Maximum value is: " + MAX_VALUE);
    }
    
    public static void main(String[] args) {
        System.out.println("Initial count: " + static_final.count);
        static_final.incrementCount();
        
        static_final obj1 = new static_final();
        static_final obj2 = new static_final();
        
        obj1.displayMaxValue();
        System.out.println("Count via obj1: " + obj1.count);
        System.out.println("Value of PI: " + static_final.PI);
    }
}
