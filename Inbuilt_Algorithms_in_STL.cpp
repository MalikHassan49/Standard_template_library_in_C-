#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n, val, fin;
    // cout << "Enter size of vector: ";
    // cin >> n;
    // vector<int> v(n);

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }

    // auto min = min_element(v.begin(), v.end());
    // cout << "Minimum element is " << *min << endl;
    // int max = *max_element(v.begin(), v.end());
    // cout << "Maximum element is " << max << endl;
    // int sum = accumulate(v.begin(), v.end(), 6);
    // cout << "Sum is : " << sum << endl;
    // cout << "Enter value to find it's count: ";
    // cin >> val;
    // int ct = count(v.begin(), v.end(), val);
    // cout << "Count of " << val << " is " << ct << endl;
    // cout << "Which element do you want to find: ";
    // cin >> fin;
    // auto it = find(v.begin(), v.end(), fin);
    // if (it != v.end())
    //     cout << *it << endl;
    // else
    //     cout << "Element not found! " << endl;
    // reverse(v.begin(), v.end());
    // for (auto val : v)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    // vector<string> s = {"Hassan", "Ali", "Haider", "Usman", "Faizan"};
    // reverse(s.begin(), s.end());
    // for (auto name : s)
    // {
    //     cout << name << " ";
    // }
    // cout << endl;

    //  All these algorithms work in O(n)
    // These all algorithms can also work in case of arrays

    //                                    In case of arrays
    int n, val, fin;
    cout << "Enter size of array: ";
    cin >> n;
    int v[n];

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    auto min = min_element(v, v + n);
    cout << "Minimum element is " << *min << endl;
    int max = *max_element(v, v + n);
    cout << "Maximum element is " << max << endl;
    int sum = accumulate(v, v + n, 6);
    cout << "Sum is : " << sum << endl;
    cout << "Enter value to find it's count: ";
    cin >> val;
    int ct = count(v, v + n, val);
    cout << "Count of " << val << " is " << ct << endl;
    cout << "Which element do you want to find: ";
    cin >> fin;
    auto it = find(v, v + n, fin);
    if (it != v + n)
        cout << *it << endl;
    else
        cout << "Element not found! " << endl;
    reverse(v, v + n);
    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << endl;
}