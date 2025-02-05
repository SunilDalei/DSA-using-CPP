#include <iostream>

using namespace std;

int main()
{
    char ch = 98; // 98 = 'b' in ASCII here ch will have the value of b . Compiler automatically convert the type of int to char
    cout << ch;   // It is an example of implicit type conversion

    int temp = 'b';
    cout << temp << endl; // Another example of implicit type conversion

    double d = 5.99;
    int e = (int)d; // Here d is type casted and the updated value is stored in e. It is an example of EXPLICIT Type casting
    cout << "The value of e is :" << e;
    
    return 0;
}