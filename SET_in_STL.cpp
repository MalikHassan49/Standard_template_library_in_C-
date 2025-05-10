#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    for(string value : s){
        cout << value << " ";
    }
    cout << endl;
    // for(auto it = s.begin(); it != s.end(); it++){
    //     cout << (*it) << endl;
    // }
}
int main(){
    set<string> s;
    s.insert("Hassan");   // log(n)
    s.insert("Ali");
    s.insert("Usman");
    s.insert("Haider");
    s.insert("Usman");
    auto it = s.find("Ali");  // log(n)
    if(it != s.end()){
        cout << (*it) << endl;
       // s.erase(it);
    }
    s.erase("Usman");
    print(s);
}