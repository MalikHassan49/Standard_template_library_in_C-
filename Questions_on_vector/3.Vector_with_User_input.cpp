#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    int x, n;
    cout << "Enter number of elemnts: ";
    cin >> n;

    cout << "Enter elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cout << endl;
    cout << "You entered: " << endl;
    for (int a : v)
    {
        cout << a << " ";
    }
    cout << endl;
    return 0;
}