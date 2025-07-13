class block{
    static int i;
    static{
        System.out.println("static block");
        i = 5;
    }
    static void display(){
        System.out.println(i);
    }
}
public class static_block {
    public static void main(String []args){
        block.display();
    }
}
