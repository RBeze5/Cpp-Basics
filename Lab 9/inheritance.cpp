#include<iostream>
using namespace std;

class Parent{
    public:
    Parent(){
        cout<<"\nThis is parent class";
    }
};
class child : public Parent{
    public:
    child(){
        cout<<"\nCalling from child class";
    }
};
int main(){
    child obj;
    return 0;
}