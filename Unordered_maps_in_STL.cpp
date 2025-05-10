#include <bits/stdc++.h>
using namespace std;

void printVec(unordered_map <int, string> &m){
    cout << "Size: " << m.size() << endl;
    for(auto pr : m){
        cout << pr.first << " " << pr.second << endl;
    }
    cout << endl;
}
int main(){
    //  1. Inbuilt implementation
    //  2. Time complexicity
    //  3. valid keys datatype
    unordered_map <int, string> m;
   // unordered_map <pair<int,int>, string> m;   unordered_map is not use for complex data types
    m[3] = "hassan";    //  O(1)
    m[7] = "ali";
    m[2] = "usman";
    m[0] = "haider";
   // m.erase(2);
   auto it = m.find(2);
   cout << (it->first) << " " << (it->second)<< endl;
   if(it != m.end()){
    m.erase(it);
   }

    printVec(m);
    
}