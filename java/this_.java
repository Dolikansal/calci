class area{
    int a;
    area(int a){
        this.a = a;
    }

    void display(){
        System.out.println("value is: " + a);
    }
}
public class this_ {
    public static void main(String[] args) {
        area a = new area(3);
        a.display();
    }
}
