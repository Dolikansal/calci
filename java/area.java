// Abstract class Shape
abstract class Shape {
    abstract double area();
}
class Circle extends Shape {
    private double radius;
    public Circle(double radius) {
        this.radius = radius;
    }
    @Override
    double area() {
        return Math.PI * radius * radius;
    }
}
class Rectangle extends Shape {
    private double length, width;
    public Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    @Override
    double area() {
        return length * width;
    }
}
class Square extends Rectangle {
    // Constructor to initialize side (since all sides are equal in a square)
    public Square(double side) {
        super(side, side);  
    }
}

public class area {
    public static void main(String[] args) {
        // Create objects of each shape
        Shape circle = new Circle(5.0);
        Shape rectangle = new Rectangle(4.0, 6.0);
        Shape square = new Square(4.0);

        // Print the area of each shape
        System.out.println("Area of Circle: " + circle.area());
        System.out.println("Area of Rectangle: " + rectangle.area());
        System.out.println("Area of Square: " + square.area());
    }
}
