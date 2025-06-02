//    Add two numbers using lambda function
#include <bits/stdc++.h>
using namespace std;

int main()
{

    auto sum = [](int a, int b)
    {
        return a + b;
    };

    cout << "Sum : " << sum(4, 9) << endl;
    return 0;
}
