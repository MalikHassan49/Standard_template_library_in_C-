#include <bits/stdc++.h>
using namespace std;

// bool should_i_swap(int a, int b){
//      if(a > b) return true;
//      return false; 
//}
bool Comparator(pair<int, int> a, pair<int, int> b){
    //  if(a < b) return true;
    //  return false; 
    if(a.first != b.first){
        if(a.first > b.first) return false;
        return true;
    }else{
        if(a.second < b.second) return false;
        return true;
    }
}

int main(){
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    vector<pair<int, int> > a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(),Comparator);
    // for(int i = 0; i < n; i++){
    //     for(int j = i + 1; j < n; j++){
    //     if(should_i_swap(a[i],a[j])){
    //        swap(a[i],a[j]);
    //     }
    // }
    // }
    for(int i = 0; i < n; i++){
        cout << a[i].first << " " << a[i].second << endl; 
    }
    cout << endl;
}