#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> v = {{3, 2}, {2, 3}, {3, 4}};

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i].first < v[j].first && v[i].first != v[j].first)
            {
                swap(v[i], v[j]);
            }

            else if (v[i].second < v[j].second && v[i].first >!v[j].first)
            {
                swap(v[i], v[j]);
            }
        }
    }
    for (auto s : v)
    {
        cout << s.first << " " << s.second << endl;
    }
    return 0;
}