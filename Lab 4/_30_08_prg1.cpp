#include<iostream>
using namespace std;

enum month{Jan,Feb,March,April,May,June,July,Aug};
int main(){
    month cMnt;
    cMnt = Aug;
    cout<<"Current Month = "<<cMnt+1;
    return 0;
}