#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v = {10,40,50,70,30,35};

    sort(v.begin(), v.end());

    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;

    auto lb = lower_bound(v.begin(), v.end(), 30);
    auto ub = upper_bound(v.begin(), v.end(), 50);

    cout << "Lower bound of 30 is " << *lb << endl;
    cout << "upper bound of 50 is " << *ub << endl;

}