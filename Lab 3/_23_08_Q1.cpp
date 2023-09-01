#include<iostream>
using namespace std;

class cal{
    public:
    int result = 0;
    void add(int a, int b){
        result = a+b;
        display();
    }
    inline int display(){
        cout<< result;
    }

};

int main(){
    int a,b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;

    cal value;
    cout<<"Addition of the numbers is: " ;
    value.add(a,b);
    return 0;
}