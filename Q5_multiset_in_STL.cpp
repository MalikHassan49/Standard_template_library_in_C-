#include <bits/stdc++.h>
using namespace std;

int main(){
    multiset <int> ms;

    ms.insert(2);
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);

    for(int s : ms){
        cout << s << " ";
    }
    cout << endl;

    cout << "Erasing one instance of 2\n";
    ms.erase(ms.find(2));

     for(int s : ms){
        cout << s << " ";
    }
    cout << endl;
}