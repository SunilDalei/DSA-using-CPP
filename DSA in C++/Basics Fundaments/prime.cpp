#include <iostream>

using namespace std;

int main()
{
    int num, div = 2, flag = 2;
    cout << "Enter the number :" << endl;
    cin >> num;
    while (div < num)
    {
        if (num % div == 0)
            flag++;
        div++;
    }
    if (flag == 2)
    {
        cout << num << " is a prime number " << endl;
    }
    else
    {
        cout << num << " is not a prime number";
    }

    /* LOGIC -2 (similar to the logic 1)
     while (div < num)
        {
            if (num % div == 0)
            {
                cout << num << " is not a prime number";
                exit(0);
            }
            else
            {
                div++;
            }
        }
        cout << "The number " << num << " is a prime number";
     */
    return 0;
}