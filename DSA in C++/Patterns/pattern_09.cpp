/*
Full Pyramid :-

        *
       ***
      *****
     *******

*/

#include <iostream>

using namespace std;

int main()
{
    int rowCount;
    cout << "Enter the number or rows in the pyramid :" << endl;
    cin >> rowCount;
    for (int row = 0; row < rowCount; row++)
    {
        int k = 0;
        for (int col = 0; col < (2 * rowCount) - 1; col++)
        {
            if (col < (rowCount - row - 1))
            {
                cout << " ";
            }
            else if
                (k < 2 * row + 1)
                {
                    cout << "*";
                    k++;
                }
                else
                cout<<" ";
        }
        cout << endl;
    }

    return 0;
}