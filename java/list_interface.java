import java.util.*;
public class list_interface {
    public static void main(String[] args) {
        ArrayList<Integer> al = new ArrayList<Integer>();
        for(int i = 1; i<= 5; i++){
            al.add(i);
        }
        System.out.println(al);

        Iterator it = al.iterator();
        while (it.hasNext()) {
            System.out.println(it.next());
        }
    }
}
