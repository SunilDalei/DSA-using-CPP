/*
FACTORIAL 
5! = 5*4*3*2*1 =120
Here the factorial of 5 is 120
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num, n = 1;
    cout << "Enter the number : ";
    cin >> num;
    int fact = 1;
    while (n <= num)
    {
        fact = fact * n;
        n++;
    }
    cout << "The factorial of " << num << " is " << fact;

    return 0;
}
