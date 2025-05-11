#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<string> s;
    int n;
    cout << "Enter the number of strings:";
    cin >> n;
    cout << "Enter strings: " << endl;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        s.insert(str);
    }
    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    while(q--){
        string str;
        cout << "Enter queries: ";
        cin >> str;
        if(s.find(str) == s.end()){
            cout << "NO" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }
}