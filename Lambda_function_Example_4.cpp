//  lambda function used in for_each loop
#include <bits/stdc++.h>
using namespace std;

int main(){

    // for_each loop ko hm us waqt use karte hain jb hm vector ya array ka hr
    // element pr koi function apply karna chachte hain
    vector <int> v = {10,20,30,40,50};
//  for_each loop
    for_each(v.begin(), v.end(), [](int x){
       cout << x << " ";
    });
    return 0;
}