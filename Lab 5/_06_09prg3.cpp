#include<iostream>
using namespace std;

class example{
    static int a;
    public:
    static void display(){
        cout<<"Enter any number: ";
        cin>>a;
        cout<<"Square root of the number is: "<<a*a;
    }
};
int example :: a;
int main(){
    example exp;
    example :: display();
    // exp.display();
    // cout<<exp.a;
}