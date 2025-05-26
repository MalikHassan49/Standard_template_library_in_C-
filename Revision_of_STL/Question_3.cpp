// Q3: Ek array of vectors banao jisme 3 vectors hoon. Har vector ka size user se lo aur elements input karo. 
//Fir array of vectors print karo.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v[3];
    int s1, s2, s3;
    cout << "Enter size of vector 1: ";
    cin >> s1;
    cout << "Enter size of vector 2: ";
    cin >> s2;
    cout << "Enter size of vector 3: ";
    cin >> s3;
    cout << "Enter elements in vector 1: " << endl;
    for (int i = 0; i < s1; i++)
    {
        int x;
        cin >> x;
        v[0].push_back(x);
    }
    cout << endl;
    cout << "Enter elements in vector 2: " << endl;
    for (int i = 0; i < s2; i++)
    {
        int x;
        cin >> x;
        v[1].push_back(x);
    }
    cout << endl;
    cout << "Enter elements in vector 3: " << endl;
    for (int i = 0; i < s3; i++)
    {
        int x;
        cin >> x;
        v[2].push_back(x);
    }
    cout << endl;

    cout << "Vector 1 elements: " << endl;
    for (auto i : v[0])
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Vector 2 elements: " << endl;
    for (auto j : v[1])
    {
        cout << j << " ";
    }
    cout << endl;

    cout << "Vector 3 elements: " << endl;
    for (auto k : v[2])
    {
        cout << k << " ";
    }
    cout << endl;

    return 0;
}
