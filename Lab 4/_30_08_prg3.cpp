#include<iostream>
using namespace std;

class mainCls{
    private: int num;
    // public:
     friend class frdCls;
     void fun(frdCls num);
     }
};
class frdCls{  
    int n;  
    public:
        void display(mainCls  obj){
            cout<<"Enter a number: ";
            cin>>obj.num;
            cout<<"Your number is : "<<obj.num;
        }
};

int main(){
    mainCls m;
    frdCls f;
    // m.add();
    f.display(m);
    return 0;
}