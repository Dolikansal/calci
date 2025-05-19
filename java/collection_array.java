import java.util.ArrayList;
import java.util.Iterator;

class collection_array {
    public static void main(String[] a) {
        ArrayList<Integer> al = new ArrayList<>();
        al.add(22);
        al.add(61);
        al.add(93);

        System.out.println(al);

        Iterator<Integer> it = al.iterator();
        while (it.hasNext()) {
            System.out.println(it.next());
        }

        al.remove(1);
        System.out.println(al);
    }
}
