/*15.Create a class called Shape with the attributes area(double) and member
function calculateArea() for calculating the area of different
shapes(square,circle,rectangle,triangle).Write a program to create an
object and call the findArea() function with one integer argument to
calculate the area of Square, two integer arguments to calculate the area of
Rectangle,one double argument to calculate area of Circle,three integer
arguments to calculate area of Triangle using function overloading.*/

#include <iostream>
#include <cmath> // For M_PI and sqrt function
using namespace std;

class Shape {
public:
    // Function to calculate the area of a square (side * side)
    double calculateArea(int side) {
        return side * side;
    }

    // Function to calculate the area of a rectangle (length * breadth)
    double calculateArea(int length, int breadth) {
        return length * breadth;
    }

    // Function to calculate the area of a circle (π * radius^2)
    double calculateArea(double radius) {
        return M_PI * radius * radius;
    }

    // Function to calculate the area of a triangle using Heron's formula
    double calculateArea(int a, int b, int c) {
        double s = (a + b + c) / 2.0;  // Semi-perimeter
        return sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula
    }
};

int main() {
    Shape shape_obj;

    // Call calculateArea with one argument to calculate the area of a square
    double square_area = shape_obj.calculateArea(5);

    // Call calculateArea with two arguments to calculate the area of a rectangle
    double rectangle_area = shape_obj.calculateArea(5, 10);

    // Call calculateArea with one double argument to calculate the area of a circle
    double circle_area = shape_obj.calculateArea(7.0);

    // Call calculateArea with three arguments to calculate the area of a triangle
    double triangle_area = shape_obj.calculateArea(3, 4, 5);

    // Print the calculated areas
    cout << "Area of Square: " << square_area << endl;
    cout << "Area of Rectangle: " << rectangle_area << endl;
    cout << "Area of Circle: " << circle_area << endl;
    cout << "Area of Triangle: " << triangle_area << endl;

    return 0;
}
