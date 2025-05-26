#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> mm;

    mm.insert({"Hassan" , 49});
    mm.insert({"Ali" , 19});
    mm.insert({"Zariyan" , 30});
    mm.insert({"Usman" , 39});

    auto lb = lower_bound(19);
    auto ub = upper_bound(49);
}