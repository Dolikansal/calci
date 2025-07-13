abstract class Shape {
    int i = 3;
    abstract void display1();
    abstract void display2();
    abstract void display3();
}

class Circle extends Shape {
    void display1() {
        System.out.println("Circle area: " + (3.14 * i * i));
    }
    void display2() {}  // Need to implement all abstract methods
    void display3() {}
}

class Square extends Shape {
    void display2() {
        System.out.println("Square area: " + (i * i));
    }
    void display1() {}
    void display3() {}
}

class Cube extends Shape {
    void display3() {
        System.out.println("Cube surface area: " + (6 * i * i));
    }
    void display1() {}
    void display2() {}
}

public class ThreeAbstraction {
    public static void main(String[] args) {
        Circle c = new Circle();
        Square s = new Square();
        Cube cb = new Cube();
        
        c.display1();  // Will print circle area
        s.display2();  // Will print square area
        cb.display3(); // Will print cube surface area
        
    }
}