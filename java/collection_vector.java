import java.util.Iterator;
import java.util.Vector;

class collection_vector{
    public static void main(String[] a) {
       Vector<Integer> al = new Vector<>();
        al.add(24);
        al.add(65);
        al.add(19);

        System.out.println(al);

        Iterator<Integer> it = al.iterator();
        while (it.hasNext()) {
            System.out.println(it.next());
        }

        al.remove(1);
        System.out.println(al);
    }
}
