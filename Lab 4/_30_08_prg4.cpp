#include<iostream>
using namespace std;

class mainCls{
    private: 
    int a, b;
    public:
    void sVal(){
        a=10;
        b=20;
    }
     friend float display(mainCls  obj);
};
  float display(mainCls  obj){
        
            int mean = (obj.a+obj.b)/2;
            return mean;
        }
int main(){
    mainCls m;
    
    // m.add();
    cout<<"Mean = " <<display(m);
    return 0;
}