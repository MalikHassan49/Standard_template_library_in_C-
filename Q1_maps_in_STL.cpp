#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> age;
    
    age["Ali"] = 22;
    age.insert({"Usamn", 44});
    age["Sara"] = 19;
    age["Ahmad"] = 25;

    for(auto s : age){
        cout << s.first << "-->" << s.second << endl;
    }

    if(age.find("Ahmad") != age.end()){
        cout << "Ahamd is found with age: " << age["Ahmad"] << endl;
    }
    return 0;
}