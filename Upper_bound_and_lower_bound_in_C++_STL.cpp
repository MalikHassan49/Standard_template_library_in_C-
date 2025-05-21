#include <bits/stdc++.h>
using namespace std;

// upper aur lower bound tb hi kisi array ya vector pr apply ho
// sakta wo sort na ho
// lower bound us element ko find karta ha ya agr wo element mojuud
// na ho to us se bara element find kar data ha
// upper bound us element ko find nahi karta jis ko hm find karna
// chacte hain balka us se bara element karta ha
int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    // cout << "Lower bound: " << endl;
    // int *ptr = lower_bound(a, a + n, 26);
    // if (ptr == (a + n))
    // {
    //     cout << "Not found" << endl;
    //     return 0;
    // }
    // cout << (*ptr) << endl;
    cout << "upper bound: " << endl;
    int *ptr1 = upper_bound(a, a + n, 5);
    if (ptr1 == (a + n))
    {
        cout << "Not found" << endl;
        return 0;
    }
    cout << (*ptr1) << endl;
}
