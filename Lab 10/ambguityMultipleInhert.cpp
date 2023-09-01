#include<iostream>
using namespace std;

class A{
    public:
    int a;
        A(){
            cout<<"Enter a number";
            cin>>a;
        }
        void show(){
            cout<<"\nEntered number is : "<<a;
        }
};
class b: public virtual A{};
class c: public b{};

int main(){
    c  obj;
    obj.show();
    return 0;
}
