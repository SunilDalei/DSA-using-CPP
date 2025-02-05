 /* Inverted Half Pyramid using numbers
 1 2 3 4 5
 1 2 3 4
 1 2 3
 1 2
 1 
 */

#include <iostream>

using namespace std;

int main()
{
    int rowCount;
    cout << "Enter the number of rows :" << endl;
    cin >> rowCount;
    for (int row = rowCount; row > 0; row = row - 1)
    {
        for (int col = 0; col < row; col++)
        {
            cout << (col + 1) << " ";
        }
        cout << endl;
    }

    return 0;
}