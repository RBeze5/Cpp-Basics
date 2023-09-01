#include<iostream>
using namespace std;

class A{
    public:
        A(){
            cout<<"This is a\n";
        }
};
class B{
    public:
        B(){
            cout<<"This is class b\n";
        }

};
class child: public B{
    public:
        child(){
            cout<<"Child class of B\n";
        }
};
class secChild : public child, public A{
    public:
    secChild(){
        cout<<"This is derived from class child and class A";

    }
};
int main(){
    secChild obj;
}