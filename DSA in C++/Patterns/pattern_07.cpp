// Half Pyramid type -02 using numbers
// 1
// 2 3
// 4 5 6
// 7 8 9 10


#include <iostream>

using namespace std;

int main()
{
    int rowCount;
    cout << "Enter the number of rows :" << endl;
    cin >> rowCount;
    int n = 1;
    for (int row = 0; row < rowCount; row = row + 1)
    {
        for (int col = 0; col <= row; col = col + 1)
        {
            cout << n << " ";
            n += 1;
        }
        cout << endl;
    }

    return 0;
}