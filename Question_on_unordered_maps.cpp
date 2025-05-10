#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string, int> m;
    int n;
    cout << "Enter number of strings:";
    cin >> n;
    cout << "Enter strings:" << endl;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        m[s]++;
    }
    // unordered_maps main insertion aur accesssing main O(1) yani constant time lagta ha.
    int q;
    cout << "Enter number of quesries:";
    cin >> q;
    while(q--){
        string s;
        cin >> s;
        cout << m[s] << endl;
    }
}