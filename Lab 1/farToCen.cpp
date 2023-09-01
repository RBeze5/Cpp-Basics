#include<iostream>
using namespace std;

int main(){
    float val,cel;
    cout<<"Enter the farenhit value: ";
    cin>>val;
    cel=5*(val-32)/9;
    cout<<"Centigrade = "<<cel;
    
    return 0;
}