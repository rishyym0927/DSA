#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(0);
    //same as vecotr

    for(auto it: ls)
    {
        cout<< it<< " ";
    }

    return 0;
}