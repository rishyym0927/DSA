/*
Bubble Sorting Technique ->

we push maximum to the last opposite to selection  sort

for eg [3, 7, 4, 2] -> [3,4,7,2] -> [3,4,2,7]
then [3,4,2,7] -> [3,2,4,7]
then [2,3,4,7] done completed

1st step -> 0 to n-1
2nd step -> 0 to n-2
.
last step -> 0 to 1
thus loop -> (i=n-1; i>=1; i--) and (j=0; j<=i-1; j++)
*/


#include <bits/stdc++.h>
using namespace std;

void bubblesort(int * arr, int n)
{

    for(int i=n-1; i>=0; i--)
    {
        int didSwap = 0;

        for(int j=0; j<=i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
                didSwap =1;
            }
        }

        if(didSwap==0)
        {
            break;
        }
    }
    return ;
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

    bubblesort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    
    return 0;
}