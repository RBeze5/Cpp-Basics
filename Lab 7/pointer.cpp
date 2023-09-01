#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;
    cout<<"Value of the varibale: "<<a;
    cout<<"\nAccessing the value using pointer: "<<*ptr;
    cout<<"\nAccessing the address using pointer: "<<ptr;     
    return 0;
}