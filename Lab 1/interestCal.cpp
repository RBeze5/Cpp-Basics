#include<iostream>
using namespace std;

int main(){
    float p,t,r,val;
    cout<<"Enter total amount: ";
    cin>>p;
    cout<<"Enter time: ";
    cin>>t;
    cout<<"Enter rate:";
    cin>>r;
    val=(p*t*r)/100;
    cout<<"Interest will be : "<<val;
    return 0;
}