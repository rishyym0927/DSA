
// [3 5 2 4 1]
// 2 4 1 3 5
// 5 3 1 4 2
// 2 4 1  3 5

#include <bits/stdc++.h>
using namespace std;
void reverse(int *arr, int start, int end)
{

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end - 1];
        arr[end - 1] = temp;
        start++;
        end--;
    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int k = 2;
    int arr[n] = {3, 5, 2, 4, 1};
    reverse(arr, 0, k);
    reverse(arr, k, n);
    reverse(arr, 0, n);
    // revrese first k elements
    // reverse last n-k elements
    // reverse whole array
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}