// Inverted Half Pyramid
// * * * * * *
// * * * * *
// * * * *
// * * *
// * *
// *

#include <iostream>

using namespace std;

int main()
{
    int rowCount;
    cout << "Enter the number of rows :" << endl;
    cin >> rowCount;
    for (int row = rowCount; row > 0; row = row - 1)
    {
        for (int col = 0; col < row; col = col + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}