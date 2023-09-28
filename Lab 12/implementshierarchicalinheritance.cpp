#include <iostream>
#include <cmath>

// Base class Shape
class Shape {
public:
    double area; // Public member variable to store the area

    // Member function to display the area
    void getArea() {
        std::cout << "Area: " << area << std::endl;
    }
};

// Derived class Circle from Shape
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor to set the radius
    Circle(double r) {
        radius = r;
        area = calculateArea();
    }

    // Function to calculate the area of a circle
    double calculateArea() {
        return 3.14159265359 * radius * radius;
    }
};

// Derived class Rectangle from Shape
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor to set the length and width
    Rectangle(double l, double w) {
        length = l;
        width = w;
        area = calculateArea();
    }

    // Function to calculate the area of a rectangle
    double calculateArea() {
        return length * width;
    }
};

int main() {
    // Create instances of Circle and Rectangle
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    // Calculate and display their respective areas
    std::cout << "Circle ";
    circle.getArea();

    std::cout << "Rectangle ";
    rectangle.getArea();

    return 0;
}
