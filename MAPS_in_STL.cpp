#include <bits/stdc++.h>
using namespace std;

void printVec(map<int,string> &m){
    cout << "Size: " << m.size() << endl;
    for(auto &it : m){
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
}
//   The time complexicity of inserting and accessing elements in maps is O(nlog(n))
int main(){
    map<int, string> m;
    m[3] = "haider";   // O(log(n))
    m[1] = "hassan";
    m[2] = "ali";
    m.insert({4,"usama"});
    m[3] = "malik";
    map<int, string> :: iterator it;
    for(it = m.begin(); it != m.end(); it++){
        cout << (*it).first << " " << (*it).second << endl; 
    }

    auto it1 = m.find(7);  //   O(log(n))
    if(it1 == m.end()){
        cout << "No value" << endl;
    }
    else{
        cout << (*it1).first << " " << (*it1).second << endl;
    }
    //  map<string, string> m2;
    //  m2.insert({"abcd", "efg"});       //  s.size * log(n)

    map<string,int> m1;
    m1.insert({"Apple", 1});
    m1.insert({"Mango", 4});
    m1.insert({"zeera", 3});
    m1.insert({"Banana", 9});
    for(auto &pr : m1){
        cout << pr.first << " " << pr.second << endl;
    }
    if(it1 != m.end()){
    m.erase(it1);
    }   //  iterator based erase
    m.erase(3);     //  O(log(n))         key based erase
    m.clear();
    printVec(m);
}