#include<iostream>
using namespace std;

inline int find(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int main(){
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>> a>>b;
    cout<<"Greater number is: "<< find(a,b);
    return 0;
}