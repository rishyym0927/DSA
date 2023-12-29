#include <bits/stdc++.h>
using namespace std;

/*
INSERTION SORT ->

14 4 15 12 6 8 13

lets take 1st elemet that is 14, it is in correct position, then comes 4, it is not in right 
position so we will put 4 before 14 by swapping and we get 4 14 15 12 6 8 13

now moving to next its 15 and it is in correct positon  and next is 12 which is not in correct position
so we will swap until it reached after consecutively thus now it is 4 12 14 15 6 8 13

this is how we will proceed
*/

void insertionsort(int * arr, int n)
{

    for(int i=0; i<=n-1; i++)
    {
        int j =i;
        while(j>0 && arr[j-1]>arr[j])
        {
            int temp = arr[j];
            arr[j]= arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
}


int main()
{
    int n;
    cout << "Enter the size of array";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element " << i + 1 << " : ";
        cin >> arr[i];
    }

    insertionsort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}