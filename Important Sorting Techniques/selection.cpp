#include <bits/stdc++.h>
using namespace std;

/*
Steps for Selection Sorting ([12,46,24,52,9])
1) Select the minimum and swap with first position [9,46,24,52,12]
2) Leaving th efirst space, again find the smallest and swap [9,12,24,52,46]

in worst case, if there are 6 elemnts , it will take max 5 steps to complete it
*/

void selectionsort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i; j < n; j++)
        {
            if (arr[mini] > arr[j])
            {
                mini = j;
            }
        }

        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
    return;
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

    selectionsort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}