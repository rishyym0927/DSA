#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;     // creates empty container
    v.push_back(1);    // push 1 to it
    v.emplace_back(2); // similar to push back and it is faster
    v.push_back(3);
    v.emplace_back(4);
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> vs(3, 10); // a container with 5 instance of 100
    // first parameter is the number of elements in the container
    vector<int> v2(vs);
    // v2 will be the copy of vs

    cout << "Size of v : " << v.size() << endl;
    // returns size of the container

    vector<int>::iterator it = v.begin();
    cout << "the value of it : " << *(it) << endl;
    it++;
    cout << "the value of it : " << *(it) << endl;

    // consider a vector {10, 20, 30, 40} so v.end() does not point at 40 , it point after 40 so you need to do it-- to go back to 40

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    for (auto i = 0; i < 4; i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
    // accessing element by index , if out of bound then runtime error
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    // at function return reference to the object at that position

    return 0;
}