#include<iostream>
using namespace std;
class convert{
    public:
    float val,cel;
    void frnToCel(){
        cout<<"Enter the farenhit value: ";
        cin>>val;
        cel=5*(val-32)/9;
        cout<<"Centigrade = "<<cel;
    }
};
int main(){
    convert temp;
    temp.frnToCel();
    return 0;
}