#include <bits/stdc++.h>
using namespace std;

void bruteforce(int *arr, int size)
{
    cout << "Using brutefore" << endl;
    int temp[size] = {0};
    int count = 0;
    for (int i = 0; i < size; i++)
    {

        if (arr[i] != 0)
        {
            temp[count] = arr[i];
            count++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
        cout << arr[i] << " ";
    }

    cout << endl;
}

void optimized(int *arr, int size)
{
    int j = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    for (int k = j + 1; k < size; k++)
    {
        if (arr[k] != 0)
        {
            int temp = arr[k];
            arr[k] = arr[j];
            arr[j] = temp;
            // swap()
            j++;
        }
    }

    cout << "Optimized Solution" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int size = 10;
    int arr[size] = {3, 5, 0, 2, 0, 6, 0, 0, 7, 9};
    // bruteforce(arr, size);
    optimized(arr, size);
    return 0;
}