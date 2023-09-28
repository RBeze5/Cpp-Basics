#include <iostream>
using namespace std;

// Base Class
class Base {
public:
    int publicVar;

    Base() : publicVar(0) {
        cout << "Base Class Constructor" << endl;
    }
};

// Derived Class
class Derived : public Base {
public:
    void display() {
        cout << "Value of publicVar in Derived class: " << publicVar << endl;
    }
};

int main() {
    Derived obj;
    obj.publicVar = 50; // Accessing the base class's public member directly
    obj.display();
    return 0;
}
