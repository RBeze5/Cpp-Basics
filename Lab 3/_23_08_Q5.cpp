#include <iostream>
using namespace std;

class bank
{
private:
    float bal;
    string name;
    int dob;
    void bankMag()
    {
        cout << "Enter the bank balance: ";
        cin >> bal;
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the date of birth: ";
        cin >> dob;
    }

public:
    string eAdd;
    int phNo;
    int panNo;
    int aadharNo;
    void personal();
};
void bank::personal()
{
    cout << "Enter your new address: ";
    cin >> eAdd;
}
void bank ::bankMag()
{
    cout << "Enter the bank balance: ";
    cin >> bal;
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the date of birth: ";
    cin >> dob;
}