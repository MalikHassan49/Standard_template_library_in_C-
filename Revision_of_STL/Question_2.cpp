// Q2: Ek vector banao aur har element ko 2 se multiply karke naye vector me store karo.
// Phir dono vectors print karo.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> first = {1, 2, 3, 4, 5};
    vector<int> second;
    for (auto it = first.begin(); it != first.end(); it++)
    {
        int init;
        init = (*it) * 2;
        second.push_back(init);
    }

    for (auto it1 : first)
    {
        cout << it1 << " ";
    }
    cout << endl;

    for (auto it2 : second)
    {
        cout << it2 << " ";
    }
    cout << endl;
}