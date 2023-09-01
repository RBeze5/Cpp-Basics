#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    //PEDMAS
    string characterName = "John";
    int characterAge;
    characterAge = 35;
    cout << "Hello " << characterAge << "world! " << characterName << endl;
    cout << characterName[1] << endl;
    cout << "Enter a number: ";
    cin >> characterAge;
    cout << characterAge << endl;
    cout << "Enter a name: ";
    getline(cin, characterName);
    cout << characterName << endl;
    //01:06
    return 0;
}