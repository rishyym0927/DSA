#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n =5;
    int arr[n] = {3, 5, 6, 1, 2};
    cout<<"Before Shifting"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    int temp = arr[0];

    for(int i=0; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }

    arr[n-1] = temp;

    cout<<endl<<"After Shifting"<<endl;
for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}