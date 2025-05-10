#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2,3,4,5,6,7};
    for(size_t i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
  //  vector<int> :: iterator it;
    for(auto it = v.begin(); it!= v.end(); it++){
        cout << (*it) << " ";
    }
   // <---- Ranged Base loop ---->
   cout << "\nRanged Base loop" << endl;
//    for(int value : v){
//     cout << value << endl;
//    }
for(int &value : v){
    value++;
   // cout << value << endl;
   }
   for(int value : v){
    cout << value << endl;
   }
   vector<pair<int, int> > v_p = {{1,2},{2,3},{3,4}};
//    for(pair<int, int> &value : v_p){
//     cout << value.first << " " << value.second << endl;
//    }
    for(auto &value : v_p){
    cout << value.first << " " << value.second << endl;
   }
   auto a = 100;
   cout << a << endl;
}