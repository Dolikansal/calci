import java.util.Iterator;
import java.util.LinkedList;

class collection_linkelist{
    public static void main(String[] a) {
        LinkedList<Integer> al = new LinkedList<>();
        al.add(2);
        al.add(16);
        al.add(39);

        System.out.println(al);

        Iterator<Integer> it = al.iterator();
        while (it.hasNext()) {
            System.out.println(it.next());
        }

        al.remove(1);
        System.out.println(al);
    }
}
