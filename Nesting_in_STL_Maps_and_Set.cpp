#include <bits/stdc++.h>
using namespace std;

int main(){
    // map< pair<int,int>, int> m;
    // pair<int,int> p1,p2;
    // p1 = {1,2};
    // p2 = {2,3};
    // cout << (p1 < p2);
    // cout << "\nmap with set" << endl;
    // map<set<int>, int> m1;
    // set<int> s1 = {1,2,3};
    // set<int> s2 = {2,3};
    // cout << (p1 < p2);

    map<pair<string,string>, vector<int> > m;
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        string fn, ln;
        int ct;
        cout << "Enter first name: ";
        cin >> fn;
        cout << "Enter second name: ";
        cin >> ln;
        cout << "Enter number of count: ";
        cin >> ct;
        cout << "Enter marks: ";
        for(int j = 0; j < ct; j++){
            int x;
            cin >> x;
            m[{fn,ln}].push_back(x); // ya m[{fn,ln}]  ak tarha ka vector ban gye ha.
    }
}
        for(auto &pr : m){
            auto &full_name = pr.first;
            auto &list = pr.second;
            cout << full_name.first << " " << full_name.second << endl;
            cout << "Size: " << list.size() << endl;
            for(auto &element : list){
                cout << element << " ";
            }
            cout << endl;
        }

}

