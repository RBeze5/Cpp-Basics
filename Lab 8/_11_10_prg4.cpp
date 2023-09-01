#include<iostream>
using namespace std;

class example{
    int feet,inches;
    public:
    example(void){
        cin>>feet>>inches;
    }
    example operator-(){
        feet = -feet;
        inches= -inches;
    }
    void display(){
        cout<<"\nFeet = "<<feet<<"\nInches = "<<inches;
    }
    
};
int main(){
    cout<<"Enter the feet and inche:\n";
    example emp;
    cout<<"Original values: ";
    emp.display();
    -emp;
    cout<<"\nAfter operator overloading: ";
    emp.display();
}