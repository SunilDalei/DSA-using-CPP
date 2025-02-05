#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter you age in years :" << endl;
    cin >> age;
    if (age >= 18)
    {
        cout << "You are eligible for voting !" << endl;
    }
    else
    {
        cout << "You are not eligible for voting ! " << endl;
    }

    return 0;
}