#include<iostream>
using namespace std;

enum seasons{Spring = 1 , Summer = 2, Autum = 3 , Winter = 4};
int main(){
    seasons current_season;
    current_season= Summer;
    cout<<"Current Month = "<<current_season<<endl;
    
    cout<<"Size = " << sizeof(current_season);
    return 0;
}