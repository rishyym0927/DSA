#include <bits/stdc++.h>
using namespace std;

void largestElement(int * arr)
{
    //Brute force -> Sort the array and get n-1 element
    int max = 0;
    for(int i=0; i<6; i++)
    {
        if(arr[i]>max)
        {
            max= arr[i];
        }
    }
    cout<<"The largest element: "<<max<<endl;
    return ;
}
int main()
{
    int arr[6]= {1,4,7,2,4,3};
    largestElement(arr);
    return 0;
}