#include <iostream>
#include <math.h>
/*
ARMSTRONG NUMBER ---> The sum of the cubes of the each digit is equal to the original number
153 is a armstrong number since (1*1*1)+(5*5*5)+(3*3*3)=153
*/
using namespace std;

int main()
{
    int num, rem, temp, sum = 0, count = 0;
    //  double sum=0;
    cout << "Enter a number : " << endl;
    cin >> num;
    temp = num;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        // We can take pow(rem,3) but here we have to declare sum as a double data type since pow always return double value.
        num /= 10;
        count++;
    }
    if (temp == sum)
    {
        cout << "The number " << temp << " is a armstrong number." << endl;
    }
    else
    {
        cout << "The number " << temp << " is not a armstrong number." << endl;
    }
    cout << "The number digits is " << count << endl;
    return 0;
}