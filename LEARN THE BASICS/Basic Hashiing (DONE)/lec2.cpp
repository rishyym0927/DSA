/*
suppose you have abcdeabefc and you have to count the number of characters

for normal method you again use the brute force method where time complexity will go upto 26xn

so lets use the hashing method in the character as well.
*/

/*
for lowercase character -> 26 alphabets thus array of size 26
a-> 96 ASCII and A->65

for a it corresponds 0 in hash array
for b it corresponds 1 in hash array
for c it corresponds 2 in hash array
for d it corresponds 3 in hash array

for example if you do like this -> f - a = numeric value
and

thus the formula is char - a
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the string" << endl;
    string s;
    cin >> s;

    // precompute
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    cout << "enter the number of different element you want to check" << endl;
    int q;
    cin >> q;
    while (q--)
    {
        char ch;
        cout << "enter the character" << endl;
        cin >> ch;
        cout << ch << ": " << hash[(ch - 'a')] << endl;
    }
    return 0;
}