import java.util.Iterator;
import java.util.Stack;

class collection_stack{
    public static void main(String[] a) {
        Stack<Integer> al = new Stack<>();
        al.push(32);
        al.push(13);
        al.push(25);

        System.out.println(al);

        Iterator<Integer> it = al.iterator();
        while (it.hasNext()) {
            System.out.println(it.next());
        }

        al.remove(1);
        System.out.println(al);
    }
}
