#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector <int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
   
    cout << "upper bound: " << endl;
    auto it = upper_bound(v.begin(), v.end(), 26);
    if (it == v.end())
    {
        cout << "Not found" << endl;
        return 0;
    }
    cout << (*it) << endl;
}
