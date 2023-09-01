#include<iostream>
using namespace std;

class example{
    int num,num1;
    public:
    example(int a){
        num = a;
        
    }
    void display(){
        cout<<"Numbers is: "<<num<<endl;
    }
};
int main(){
    // example exp(10);
    example exp,exp1;
    exp.display();
    example exp1(5);
    exp1.display();
}