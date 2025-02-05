#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements of the array : " << endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
}
cout<<sizeof(arr)<<endl;
for(int i:arr)
cout<<i<<" ";
    // Create two variable min which contains minimum value of int 
    int min = INT_MIN;
    int max = arr[0];
    // We can also initialize min=max=arr[0]
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
        else
            min = arr[i];
    }
    cout << "Max " << max << " Min " << min << endl;
    return 0;
}