#include <bits/stdc++.h>
using namespace std;

int main(){
    set<string> s;
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    cout << "Enter strings:" << endl;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        s.insert(str);
    }
    cout << "\nUnique strings: " << endl;
    for(auto value : s){
        cout << value << endl;
    }
    return 0;
}