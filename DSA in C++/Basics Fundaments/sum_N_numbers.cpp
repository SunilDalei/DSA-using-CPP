#include <iostream>
// Program to find sum of n terms starting from 1
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter The N'th number" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "The sum of the numbers till " << n << " starting from 1 is " << sum << endl;

    return 0;
}