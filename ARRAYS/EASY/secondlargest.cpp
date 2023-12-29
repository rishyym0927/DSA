#include <bits/stdc++.h>
using namespace std;


void secondlargest(int * arr)
{

    //for brute force you sort the array and check whether n-2 and n-1 if they are eqaul you travers back
    // this will have time complexity NlogN

    /* 2 way is that you can find the largest and then try to find the second largest*/

    //optimal approach

    /* conside array which contain positive numbers only then
    largest == arr[0] and smallest = -1
    */

   int large= arr[0];
   int slarge = -1;

   for(int i=1; i<6; i++)
   {
    if(arr[i]> large){
        large = arr[i];
        slarge = arr[i-1];
    }

    else if(arr[i]<large && arr[i]> slarge)
    {
        slarge= arr[i];
    }
   }

   cout<<"The second largest element is :"<< slarge<<endl;
    return;
}

int main()
{
    int arr[6]= {1,4,2,3 ,8, 7};
    secondlargest(arr);
    return 0;
}