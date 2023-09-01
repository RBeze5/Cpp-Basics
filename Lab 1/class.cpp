#include<iostream>
using namespace std;

class Employee{
    public:
    int salary,DA,gross;
    void sal(){
        cout<<"Enter the amount: ";
        cin>>salary;
        cout<<"Enter the DA amount: ";
        cin>>DA;
        cout<<"Gross salary = "<< salary+DA;
    }
};
int main(){
    Employee emp;
    emp.sal();
    return 0;
}