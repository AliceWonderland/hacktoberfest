#include <iostream>

// Base class
class Shape {
public:
    // Virtual function for calculating area (to be overridden by derived classes)
    virtual double area() const {
        return 0.0;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Override the area() function for Circle
    double area() const override {
        return 3.14159265 * radius * radius;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // Override the area() function for Rectangle
    double area() const override {
        return width * height;
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    // Create an array of Shape pointers to demonstrate polymorphism
    Shape* shapes[2];
    shapes[0] = &circle;
    shapes[1] = &rectangle;

    // Calculate and print the areas using polymorphism
    for (int i = 0; i < 2; i++) {
        std::cout << "Area of shape " << i + 1 << ": " << shapes[i]->area() << std::endl;
    }

    return 0;
}
