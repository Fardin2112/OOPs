#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function (forces derived classes to implement it)
    virtual void area() = 0;  

    void display() {
        cout << "This is a shape." << endl;
    }
};

// Derived class 1
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) { radius = r; }

    void area() override {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) { length = l; width = w; }

    void area() override {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

int main() {
    // Shape s; // ❌ ERROR: Cannot instantiate abstract class

    Circle c(5);
    c.display();  // Accessing non-abstract method
    c.area();     // Calling overridden method

    Rectangle r(4, 6);
    r.display();  // Accessing non-abstract method
    r.area();     // Calling overridden method

    return 0;
}
