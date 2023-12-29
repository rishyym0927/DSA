#include <bits/stdc++.h>
using namespace std;

// selection, bubble, insert takes n^2 time complexity

/*
In Merge sort-> remeber divide and merge 

[3 1 2 4 1 5 2 6 4] -> 9 elements divifing in pattern (n+1)/2 and (n-1)/2
[3 1 2 4 1] -> 5 elements and [5 2 6 4] -> 4 elements 
dividing the left part but follow the same pattern
[3 1 2 ]-> 3 part and [4 1]-> 2 parts (lets divde the left part)
[3 1]-> 2 part and [2]-> 1 part  (lets divide the left part)
[3]-> 1 part and [1] -> part (we can not divide the left part anymore)

since we have [3] and [1] two different array , we will merge it in sprted manner
whenever the items get splitted into single items we merge them in sorted order and go back
aur be peeche jaakr tum merge karte jaao.

PESUDO CODE ->

mergeSort( arr, low, high)
{
    if((low>=high)) return;
    mid = (low + high ) / 2 ; // floor division
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high)
}
*/
void merge(vector<int> &arr, int low, int mid, int high)
{
    vector <int> temp; //temporary array
    int left = low; //starting index of left half of arr
    int right = mid+1; // starting index of right half of array

    while(left<=mid && right<=high)
    {
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }

        else {
            temp.push_back(arr[right]);
            right++;
        }

    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
   
}


void mergeSort( vector<int> &arr, int low, int high)
{

    if(low>=high) return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid); //left half
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);

}
int main()
{
    vector <int> vec = {9, 4, 7, 6, 3, 1, 5};
    int n=7;

    mergeSort(vec, 0, n-1);
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " "  ;
    }

}