#include<iostream>
using namespace std;

void print(int a){
    cout<<"\nInteger value is: "<<a;
}
void print(double a){
    cout<<"\nFloat value is: "<<a;
}
void print(char const * c){
    cout<<"\nString value is: "<<c;
}

int main(){
    print(10);
    print(3.24);
    print("Hello");
    return 0;
}