#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);

    for (auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}