#include<iostream>
using namespace std;

class Example{
    int a,b;
    public:
        void input(){
            cout<<"\nEnter two numbers:\n";
            cin>>a>>b;
        }
        Example operator+ (Example &obj){
            Example obj1;
            obj1.a = this->a + obj.a;
            obj1.b = this->b + obj.b;
            return obj1;
        }
        void display(){
        cout<< " A = "<<a<<" B = "<<b;

        }
       
        
};
int main(){
    Example exp,exp1, ans;
    exp.input();
    exp1.input();
    ans = exp + (exp1);
    ans.display();
    return 0;
}