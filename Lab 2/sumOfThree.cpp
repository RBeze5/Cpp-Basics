# include<iostream>
using namespace std;
void addInt(int x, int y , int z){
    int sum = x+y+z;
    cout<<"Sum of the integer is : "<<sum<<endl;
}
void addDec(float x, float y , float z){
    float sum = x+y+z;
    cout<<"Sum of the decimal is : "<<sum<<endl;
}

int main(){
    int x,y,z;
    float a,b,c;
    cout<<"Enter three integer number: "<<endl;
    cin>> x>> y>>z;
    cout<<"Enter three decimal number: "<<endl;
    cin>> a>> b>>c;

    addInt(x,y,z);
    addDec(a,b,c);

    return 0;
}