class human {
    String gender = "male";
    int age = 28;
    void display(){
        System.out.println("gender is: "+gender);
        System.out.println("age is: "+ age);
    }
}

class manager extends human{
    String name = "rahul";
    int salary = 240000;
}


class employee extends manager{
    String post = "junior";
    int employee_salary = 180000;
}
public class single_inheritance {
    public static void main(String[] args) {
        System.out.println("single level inheritance");
        manager mg = new manager();
        mg.display();
        System.out.println(mg.gender);
        System.out.println(mg.name);
        System.out.println("multilevel inheritance");
        employee em = new employee();
        System.out.println(em.post);
        System.out.println(em.name);
    }
}
