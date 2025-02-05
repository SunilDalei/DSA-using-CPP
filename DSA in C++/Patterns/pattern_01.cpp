// Solid Rectangle
//  * * * * * * * *
//  * * * * * * * *
//  * * * * * * * *
//  * * * * * * * *

#include <iostream>

using namespace std;

int main()
{
    int rowCount, colCount;
    cout << "Enter the number of rows : " << endl;
    cin >> rowCount;
    cout << "Enter the number of columns : " << endl;
    cin >> colCount;
    // Outer Loop is for rows
    for (int row = 0; row < rowCount; row = row + 1)
    {
        // Inner Loop is for columns
        for (int col = 0; col < colCount; col = col + 1)
        {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}