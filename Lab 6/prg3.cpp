// #include<iostream>
// using namespace std;
// int n = 0;
// class example{
//     public:
   
//     example(){
//         cout<<"Object no. = "<<++n<<endl;
        
//     }
//     ~example(){
//         cout<<"Destroyed object "<<n<<endl;
//     };
    
// };
// int main(){
//     example emp;
//     {
//         cout<<"Inside block 1\n";
//         example emp2;
        
//     }
//     cout<<"Back inside main\n";

//     return 0;
// }

#include<iostream>
using namespace std;
int n = 0;
class example
{
    public:
        example()
        {
            cout<<"\n Object created"<<++n;
        }
         
        ~example()
        {
            cout<<"\n Object destroyed"<<n--;
        }
};
 
int main()
{
    example exp,exp1,exp3;
    return 0;
}