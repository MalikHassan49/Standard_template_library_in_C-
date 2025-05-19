#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> s;
    int n;
    string names;
    cout << "Enter number of strings: ";
    cin >> n;
    cin.ignore();
    cout << "Enter strings: " << endl;
    for (int i = 0; i < n; i++)
    {
        getline(cin, names);
        s.push_back(names);
    }
    cout << endl;
    for (string name : s)
    {
        cout << name << " ";
    }
    cout << endl;
    return 0;
}