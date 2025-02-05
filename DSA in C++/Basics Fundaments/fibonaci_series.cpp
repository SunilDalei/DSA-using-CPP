/*
FIBONACCI SERIES   ----> Sum of the last two numbers
0 1 1 2 3 5 8 13 21 .....
*/

#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 1, c, n;
    cout << "Enter the number of digits you want to print : " << endl;
    cin >> n;
    cout << a << "\t";
    cout << b << "\t";
    for (int i = 0; i < n - 2; i++) // ---> i < n-2 since first two numbers are printed outside the loop
    {
        c = a + b;
        cout << c << "\t";
        a = b;
        b = c;
    }
    cout << endl;
    return 0;
}