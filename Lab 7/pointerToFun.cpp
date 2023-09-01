#include<iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
int (*fptr)(int,int);
int main(){
    int a,b;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    fptr = &add;
    cout<<"Addition of the numbers is: "<<fptr(a,b);

    return 0;
}