#include <bits/stdc++.h>
using namespace std;

void print(unordered_set<string> s){
    for(string value : s){
        cout << value << endl;
    }
}
int main(){
    unordered_set<string> s;
    s.insert("Hassan");    // O(1)
    s.insert("Usama");
    s.insert("Sameer");
    s.insert("Zohaib");
    s.insert("Ali");
    s.insert("Abdullah");
    print(s);
}