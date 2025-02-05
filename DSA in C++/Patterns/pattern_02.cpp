// Hollow Rectangle
// * * * * * *
// *         *
// * * * * * *

#include <iostream>

using namespace std;

int main()
{
    int rowCount, colCount;
    cout << "Enter the number of rows :" << endl;
    cin >> rowCount;
    cout << "Enter the number of columns :" << endl;
    cin >> colCount;
    // ---> Outer loop is for rows
    for (int row = 0; row < rowCount; row = row + 1)
    {
        if (row == 0 || row == rowCount - 1)
        {
            // ---> For first and last rows
            for (int col = 0; col < colCount; col = col + 1)
            {
                cout << "* ";
            }
        }
        else
        {
            // ----> For the middle rows
            cout << "* ";
            for (int col = 0; col < colCount - 2; col = col + 1)
            {
                cout << "  ";
            }
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}