#include<iostream>
using namespace std;

class employee{
    public:
    int salary, exp;
        employee(int a, int b){
            salary = a;
            exp = b;
        }
        employee(){};
        employee(employee&emp){
            salary = emp.salary;
            exp = emp.exp;
        }
        void display(){
            cout<<"Salary = "<<salary<<endl;
            cout<<"Experience = "<<exp<<endl;
        }
};
int main(){
    employee emp(25000,3),emp1;
    emp.display();
    // employee emp1 = emp;
    // emp1.display();
    // employee emp1;
    emp1.salary = 20000;
    emp1.exp= 20;
    employee emp3(emp1);
    emp3.display();


    return 0;
}
