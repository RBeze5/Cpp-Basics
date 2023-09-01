#include<iostream>
using namespace std;
class exp{
    public:
     int a,b,c;
     exp comp(exp obj){
         exp temp;
         if(obj.a>obj.b){
             temp.c = obj.a;
             return temp;
         }else{
             temp.c = obj.b;
             return temp;

        }
     }
};
int main(){
    exp obj,obj1;
    cout<<"Enter the first number: ";
    cin>>obj.a;
    cout<<"Enter the second number: ";
    cin>>obj.b;
    obj1 = obj.comp(obj);
    cout<<"Largest of the two numbers is: "<<obj1.c;
    
}