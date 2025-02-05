#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str = "aba";
    int freq[128]={0};
    for (int i = 0; i < str.size(); i++){
        freq[str[i]]++;
        // cout<<str[i]<<endl;
        // cout<<freq['b'];
    }
    for (int i = 0; i < 128; i++)
        {
            if(freq[i]>0)
            cout<<char(i)<<" "<<freq[i]<<endl;
        }
    return 0;
}