#include<iostream>
using namespace std;

class employee{
    string name;
    int empId;
    float salary;
    public:
     void input(){
         cout<<"Enter ID: ";
         cin>>empId;
         cout<<"Enter the name: ";
         cin>>name;
         cout<<"Enter salary: ";
         cin>>salary;
         cout<<endl;
     }
     void display(){
         cout<<"ID = "<<empId<<endl;
         cout<<"Name = "<<name<<endl;
         cout<<"Salary = "<<salary<<endl;
     }
};
int main(){
    employee emp[5];
    for(int i = 0 ; i < 5; i++){
        emp[i].input();
    }
    for(int i = 0 ; i < 5; i++){
        printf("************************\n");
        cout<<"Manager "<<i+1<<endl;
        emp[i].display();
    }
    return 0;
}