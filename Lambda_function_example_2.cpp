//        Find square of number
#include <bits/stdc++.h>
using namespace std;

int main()
{
    auto square = [](int x)
    {
        return x * x;
    };

    int num;
    cout << "Enter a number to find their square: ";
    cin >> num;
    cout << "Square of " << num << " is " << square(num) << endl;
    return 0;
}