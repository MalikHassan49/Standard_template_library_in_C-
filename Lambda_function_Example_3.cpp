//   Capture a value from outside like multiplier
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int multiplier = 3;
    auto multiply = [multiplier](int x)
    {
        return multiplier * x;
    };

    cout << "Product: " << multiply(6);
    return 0;
}