// Q1: Ek vector banao aur usme 5 numbers lo user se. Phir unhe print karo using range-based loop.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    // vector<int>::iterator it;
    int num;
    cout << "Enter size of vector: ";
    cin >> num;
    cout << "Enter numbers: " << endl;
    for (int i = 0; i < num; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (auto it : v)
    {
        cout << it << endl;
    }
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    return 0;
}