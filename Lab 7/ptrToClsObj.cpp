#include<iostream>
using namespace std;
class item{
    int code;
    float price;
    public:
        void input(){
            cin>>code>>price;
        }
        void display(){
            cout<<"\n\nCode: "<<code<<"\nPrice: "<<price;
        }
};
int main(){
    int a,i,n;
    float b;
    cout<<"Numbers of data to be stored: ";
    cin>>n;
    item *ptr = new item[n];
    item *ptr1 = ptr;
    for(i = 0; i<n ; i++){
    cout<<"Enter the code and the price:\n ";
        ptr->input();
        ptr++;
    }
    for(i = 0; i<n ; i++){
        ptr1->display();
        ptr1++;
    }
    return 0;
}
