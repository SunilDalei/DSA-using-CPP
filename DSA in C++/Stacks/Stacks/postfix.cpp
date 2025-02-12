#include <bits/stdc++.h>
#include "implementation_arrays.cpp"

using namespace std;

int result(char *postexp)
{
    Stack s;
    
    for (int i = 0; postexp[i] != '\0'; i++) {
        if (postexp[i] >= '0' && postexp[i] <= '9') {
            s.push(postexp[i] - '0');
        } else {
            int val2 = s.pop();
            int val1 = s.pop();
            
            if (postexp[i] == '+') s.push(val1 + val2);
            else if (postexp[i] == '-') s.push(val1 - val2);
            else if (postexp[i] == '*') s.push(val1 * val2);
            else if (postexp[i] == '/') s.push(val1 / val2);
        }
    }
    
    return s.pop();
}
int main()
{
    Stack s;
    char postexp[30];
    cout<<"Enter the postfix expression\n";
    cin>>postexp;
    cout<<"Result:"<<result(postexp)<<endl;

    return 0;
}