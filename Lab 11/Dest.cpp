#include<iostream>
using namespace std;
int count=0;
class example{
    public:
        example(){
            count++;
            cout << count;
        }
        ~example(){
            cout << count;

        }
};

int main(){
    example o;
    {
        example o1, o2;
    }
    return 0;
}
