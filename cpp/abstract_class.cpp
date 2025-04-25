#include <iostream>
using namespace std;
class Shape {
public:
    
    virtual void draw() = 0;

    
    void displayType() {
        cout << "This is a shape." << endl;
    }
};
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle." << endl;
    }
};

int main() {
    Shape* shape;

    Circle circle;
    Rectangle rectangle;

    shape = &circle;
    shape->draw(); 

    shape = &rectangle;
    shape->draw(); 

    return 0;
}
