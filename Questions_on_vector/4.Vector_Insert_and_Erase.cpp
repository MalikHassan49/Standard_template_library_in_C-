#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    v.insert(v.begin() + 2, 25); // insert 25 at index 2
    cout << "Vector after insertion: " << endl;

    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    v.erase(v.begin() + 1); //  Remove element at index 1
    cout << "Vector after deletion: " << endl;
    for (int x : v)
    {
        cout << x << " ";
    }
}