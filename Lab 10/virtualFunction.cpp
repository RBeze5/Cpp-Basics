#include<iostream>
using namespace std;

class example{
    public:
        virtual void display(){
            cout<<"Message from base class\n";
        }
        void show(){
            cout<<"\nVirtual class";
        }
};
class child: public example{
    public:
        void display(){
            cout<<"Message changed at child class\n";
        }
        void show(){
            cout<<"\nChild class";
        }

};

int main(){
    example *ptr;
    child obj;
    ptr=&obj;
    ptr->display();
    ptr->show();
}