#include <bits/stdc++.h>
using namespace std;

void pairs()
{
    pair<int, int> p ={1, 3};
    cout<<p.first<<" "<<p.second <<endl;;
    pair<int, pair<int , int>> m = {3, {1,9}};
    cout<<m.first<<" "<<m.second.second<< " "<<m.second.first<<endl;
    pair<int, int> arr[] = {{1,2}, {3,4}};
    cout<<arr[0].first<<" "<<arr[1].second<<endl;
}

int main(){
    pairs();
    return 0;
}