#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> v = {{1, 2}, {2, 3}, {3, 4}};

    for (int i = 0; i < v.size(); i++)
    {
        swap(v[i].first, v[i].second);
    }
    cout << endl;
    for (auto x : v)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}