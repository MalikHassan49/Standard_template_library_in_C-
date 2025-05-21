#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int, int> > v = {{3,4},{1,5},{1,2},{2,3}};

    sort(v.begin(), v.end());

    cout << "\nSorted pairs: " << endl;
    for(auto a : v){
        cout << a.first << " " << a.second << endl;
    }
    return 0;
}