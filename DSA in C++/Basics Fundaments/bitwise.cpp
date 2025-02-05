#include <iostream>

using namespace std;

int main()
{
   bool a = false;
   bool b = true;
   cout << (a & b) << endl;
   cout << (a | b) << endl;
   cout<<(a^b)<<endl;
   cout<<(~a)<<endl;
   cout<<(~b)<<endl;

   // Left shift(<<)and right shift (>>) operator
   int m=2;
   m=m<<5;
   cout<<m<<endl;
   

   return 0;
}