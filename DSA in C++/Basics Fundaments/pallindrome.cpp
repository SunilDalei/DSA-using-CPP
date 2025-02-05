#include <iostream>
/*
12121 is a pallindrome since its reverse is also same as the original number.
*/
using namespace std;

int main()
{
    int num, rev = 0, temp;
    cout << "Enter a number" << endl;
    cin >> num;
    temp = num;
    while (num > 0)
    {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }
    if (temp == rev)
    {
        cout << "The number " << temp << " is a pallindrome number." << endl;
    }
    else
    {
        cout << "The number " << temp << " is not a pallindrome number." << endl;
    }

    return 0;
}