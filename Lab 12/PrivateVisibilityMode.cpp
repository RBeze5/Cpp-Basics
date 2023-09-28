#include <iostream>
using namespace std;

// Base Class
class Base {
private:
    int privateVar;

public:
    Base() : privateVar(0) {
        cout << "Base Class Constructor" << endl;
    }

    void setPrivateVar(int val) {
        privateVar = val;
    }

    int getPrivateVar() {
        return privateVar;
    }
};

// Derived Class
class Derived : private Base {
public:
    void display() {
        setPrivateVar(100); // Accessing the base class's private member using a public member function
        cout << "Value of privateVar in Derived class: " << getPrivateVar() << endl;
    }
};

int main() {
    Derived obj;
    // obj.setPrivateVar(50); // This line will give an error as privateVar is not accessible directly.
    obj.display();
    return 0;
}
