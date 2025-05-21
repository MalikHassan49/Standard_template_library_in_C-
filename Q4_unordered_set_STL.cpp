#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_set <string> countries;

    countries.insert("Pakistan");
    countries.insert("India");
    countries.insert("Nepal");
    countries.insert("India");  // Duplicates not allowed

    for(string c : countries){
        cout << c << endl;
    }
    return 0;
}