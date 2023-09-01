#include<iostream>
using namespace std;

class first{
    public:
    first(){
        cout<<"\nThis is first class";
    }
};
class second{
    public:
    second(){
        cout<<"\nThis is second class";
    }
};
class child : public first, public second{
    public:
    void display(){
        cout<<"\nDisplaying them from the child class";
    }
};
int main(){
    child obj;
    obj.display();
    return 0;
}