#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(3);
    s.insert(5);  //  Duplicates not allowed
    s.insert(1);

    for(auto i : s){
        cout << i << " ";
    }
    return 0;
}