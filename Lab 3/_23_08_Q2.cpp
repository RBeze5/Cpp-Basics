#include<iostream>
using namespace std;

class circle{
    protected: double pi;
    private: double result;
    public: double value;
    double area( double r){
        pi = 3.14;
        result = pi*(r*r);
        cout<< result;

    }

};
int main(){
    double value;
    cout<<"Enter the radius of the circle: ";
    cin>>value;

    circle cal;
    cout<<"Radius = ";
    cal.area(value);
}