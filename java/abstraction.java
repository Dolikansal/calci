abstract class area{
    int r = 6;
    void display(){
        System.out.println(3.14 * r * r);
    }
}
public class abstraction  extends area{
    public static void main(String[] args) {
        abstraction a = new abstraction();
        a.display();
    }
}
