#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s = {10, 50, 30, 70, 40};

    cout << "Set elements: " << endl;
    for (auto i : s)
    {
        cout << i << " ";
    }

    auto lb = s.lower_bound(50);
    auto ub = s.upper_bound(30);

    cout << endl;

    if (lb != s.end())
    {
        cout << "lower bound of 50 is: " << *lb << endl;
    }
    else
    {
        cout << "Not found! " << endl;
    }

    if (ub != s.end())
    {
        cout << "upper bound of 30 is: " << *ub << endl;
    }
    else
    {
        cout << "Not found! " << endl;
    }
}