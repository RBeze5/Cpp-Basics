#include <iostream>
using namespace std;

class example{
    public:
        virtual void display()=0;
};
class child:public example{
    public: 
        void display(){
            cout<<"Hello World";
        }
};
int main(){
    child obj;
    example *ptr = &obj;
    ptr->display();
    return 0;
}