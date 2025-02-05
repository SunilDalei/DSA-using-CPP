// Half Pyramid
//  *
//  * *
//  * * *
//  * * * *
//  * * * * *

#include <iostream>

using namespace std;

int main()
{
    int rowCount;
    cout << "Enter the value of row :" << endl;
    cin >> rowCount;
    for (int row = 0; row < rowCount; row = row + 1)
    {
        for (int col = 0; col <= row; col = col + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}