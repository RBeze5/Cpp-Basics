#include<iostream>
using namespace std;

class employee{
    int age;
    public:
        employee(int num){
            age = num;
        }
        void display(){
            cout<<"Empolyee's age = "<<age;
        }
};
int main(){
    int n;
    cout<<"Enter the age: ";
    cin>>n;
    employee emp(n);
    emp.display();
    
    return 0;
}