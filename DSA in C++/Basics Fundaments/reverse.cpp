#include <iostream>

using namespace std;

int main()
{
    int num, rev = 0;
    cout << "Enter a number" << endl;
    cin >> num;
    while (num > 0)
    {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }
    cout << "The reverse of the number is :" << rev<<endl;

    return 0;
}