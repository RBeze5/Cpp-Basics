#include<iostream>
using namespace std;

class Box{
    double length, breadth, height;
    public:
        void input(){
            cout<<"\nEnter the length: ";
            cin>>length;
            cout<<"\nEnter the breadth: ";
            cin>>breadth;
            cout<<"\nEnter the height: ";
            cin>>height;
        }
        double vol(){
            return (length*breadth*height);
        }
        int compare(Box obj){
            return this->vol()>obj.vol();
        }
};
int main(){
    Box obj,obj1;
    // Box obj1;
    cout<<"\nEnter the values for Box 1";
    obj.input();
    cout<<"\nEnter the values for Box 2";
    obj1.input();
    if(obj.compare(obj1)){
        cout<<"\nBox 1 is greater";
    }else{
        cout<<"\nBox 2 is greater";
    }
    return 0;
}
