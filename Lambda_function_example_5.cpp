#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {5, 2, 9, 1, 3};
    for (auto a : v)
    {
        cout << a << " ";
    }
    cout << endl;

    sort(v.begin(), v.end(), [](int x, int y)
         { return x > y; });

    for (auto a : v)
    {
        cout << a << " ";
    }
    return 0;
}