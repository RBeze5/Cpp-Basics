#include<iostream>
using namespace std;

void shape( float val){
   cout<<"\nArea of the circle is: "<< ((22/7)*(val*val));
}
void shape(float h, float w){
    cout<<"\nArea of rectangle is: "<<(h*w);
}

int main(){
    float choice, a,b;
    cout<<"Select any...\n1. Area of Circle\n2. Area of Rectangle\n";
    cin>>choice;
    if(choice==1){
        cout<<"Enter the radius: ";
        cin>>a;
        shape(a); 
    }else if(choice==2){
        cout<<"Enter the height and width:\n";
        cin>>a>>b;
        shape(a,b);
    }else{
        cout<<"Invalid selection!";
    }
    return 0;
}