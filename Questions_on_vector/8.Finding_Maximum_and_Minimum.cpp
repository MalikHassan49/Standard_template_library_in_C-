#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {20, 70, 10, 40, 60};

    auto it = max_element(v.begin(), v.end());
    cout << "Maximum element: " << *it << endl;
    auto it1 = min_element(v.begin(), v.end());
    cout << "Minimum element: " << *it1 << endl;
    return 0;
}