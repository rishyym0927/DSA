#include <bits/stdc++.h>

using namespace std;
/*
you have an array [1, 4, 4, 6, 7, 2, 2] and lets say you have to
count how many times a particular number appears
*/

/*
1st method: is to use a loop which takes an array and the taarget number
and then we will iterate over that array using for loop and if the current element of array matches with target number
we will increase the counter. This can have complexity of n squre and not a better method.
*/

/*2nd method: The use of hashing
You have an array which contain can contain a number till 12 and the given
array is [1,2,1,2,2]. So now in hasing you can create a hash array which will be
a size of 13 having index from 0 to 12 and store them with initial value 0 andwhenever you test the real array
you store the coresponding result in the hash array as per the indexing
*/

int main()
{

    int arr[5] = {1, 2, 3, 2, 1};

    // precapture
    int hash[13] = {0};
    for (int i = 0; i < 5; i++)
    {
        hash[arr[i]] += 1;
    }

    // fetching
    for (int i = 0; i < 13; i++)
    {
        cout << i << ": " << hash[i] << endl;
    }
    return 0;
}

/*
when you are using array for hashing
in main arr can go upto 10e6
in global array can go upto 10e3
so if elements are upto 10e9 you can not declare array of 10e9+1

*/