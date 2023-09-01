#include<iostream>
using namespace std;

inline void display(int num){
    cout<<"Your number is: "<<num<<endl;
}

int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    display(n);
    return 0;
}