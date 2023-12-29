#include <bits/stdc++.h>
using namespace std;

int main()
{
    //yo wull get sorted array
    int arr[]= {1,1,2,2,2,3,3,3,4,4,4,4,4,5,5,};
    int i =0;

    for(int j=1; j<sizeof(arr)/ sizeof(arr[0]); j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
    cout << "index:" <<i<<endl;

    for(int j=0; j<sizeof(arr)/ sizeof(arr[0]); j++)
    {
        cout<<arr[j]<<" ";
    }

    
    return 0;
}