#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map <string, int> score;

    score["Physics"] = 85;
    score["Math"] = 90;
    score["English"] = 75;

    for(auto s : score){
        cout << s.first << "-->" << s.second << endl;
    }
    return 0;
}