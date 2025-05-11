#include <bits/stdc++.h>
using namespace std;

void print(multiset<string> s){
    for(auto value : s){
        cout << value << endl;
    }
}
int main(){
    multiset<string> s;
    s.insert("Hassan");   // O(log(n))
    s.insert("Usama");
    s.insert("abdullah");
    s.insert("Bakar");
    s.insert("Ali");
    s.insert("Hassan");
   // auto it = s.find("Hassan");
    // if(it != s.end()){
    //     s.erase(it);
    // }
    s.erase("Hassan");
    print(s);
}
//  We use multiset in place of priority queue
//  s.erase(it)  --->  Points to only first value and remove first value in set
//  But s.erase("Hassan")  --->  Remove the whole value from set 