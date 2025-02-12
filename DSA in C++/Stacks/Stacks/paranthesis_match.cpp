#include <bits/stdc++.h>
#include "implementation_arrays.cpp"

using namespace std;

int main()
{
    Stack s;
    char exp[30];
    cout << "Enter expression: " << endl;
    cin >> exp;
    for (char c = exp[0]; c != '\0'; c++)
    {
        if (c == '[' || c == '{' || c == '(')
            s.push(c);
        else if (c == ')' && s.peek() == '(' || c == '}' && s.peek() == '{' || c == ']' && s.peek() == '[')
            s.pop();
        else
            break;
    }
    if (s.isEmpty())
        cout << "Valid Paranthesis \n";
    else
        cout << "Not a valid paranthesis \n";

    return 0;
}