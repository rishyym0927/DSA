// LETS USE MAP AND UNORDERED MAP

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // declared array and set its values
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter array elements" << endl;
        cin >> arr[i];
    }

    // pre compute map<key, value>
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    int q;
    cout << "How many elements you want to check" << endl;
    cin >> q;
    while (q--)
    {
        int number;
        cout << "enter the elements" << endl;
        cin >> number;
        // fetch
        cout << mpp[number] << endl;
    }
    return 0;
}

// you can also use unordered map but it is not sorted
//  in map , number are stored in sorted order.
// most of the time use unordered map but if time limit exceeds
// you should use