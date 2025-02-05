/* Hollow Half Pyramid

* * * * * * * 
*         *
*       *
*     *
*   *
* *
*

*/

#include <iostream>

using namespace std;

int main()
{
    int rowCount;
    cout << "Enter the number of rows :" << endl;
    cin >> rowCount;
    for (int row = 0; row < rowCount; row = row + 1)
    {
        for (int col = 0; col < rowCount; col++)
        {
            if (row == 0 || col == 0 || col == rowCount - row - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}