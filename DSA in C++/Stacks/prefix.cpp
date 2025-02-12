#include <bits/stdc++.h>
#include "implementation_arrays.cpp"

using namespace std;

int result(char *preexp)
{
    Stack s;
    int length = 0;

    while (preexp[length] != '\0')
        length++;

    for (int i = length - 1; i >= 0; i--)
    {
        if (preexp[i] >= '0' && preexp[i] <= '9')
        {
            s.push(preexp[i] - '0');
        }
        else
        {
            int val1 = s.pop();
            int val2 = s.pop();
            if (preexp[i] == '+')
                s.push(val1 + val2);
            else if (preexp[i] == '-')
                s.push(val1 - val2);
            else if (preexp[i] == '*')
                s.push(val1 * val2);
            else if (preexp[i] == '/')
                s.push(val1 / val2);
        }
    }

    return s.pop();
}
int main()
{
    Stack s;
    char preexp[30];
    cout << "Enter the postfix expression\n";
    cin >> preexp;
    // *+54-82
    cout << "Result:" << result(preexp) << endl;

    return 0;
}