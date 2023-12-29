// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int arr[10]= {1,4,2,5,2,5,2,7,2,4};
    int hash[8]={0};
    for(int i=0; i<10;i++)
    {
        hash[arr[i]]++;
    }
    
    for(int i=0; i<8; i++)
    {
        cout<<i<<": "<<hash[i]<<endl;
    }

    int x=1000000,  y=0;

    for(int i=0; i<10; i++)
    {
        if(hash[i]>y) y=hash[i];
        elif()
    }

    return 0;
}