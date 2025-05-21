#include <bits/stdc++.h>
using namespace std;

int main(){
    multimap <string, int> students;

    students.insert({"Ali", 85});
    students.insert({"Sara", 90});
    students.insert({"Ali", 75});  // Duplicate key allowed
    students.insert({"Zain", 88});

    cout << "All students with their scores: " << endl;

    for(auto s : students){
        cout << s.first << " - " << s.second << endl;
    }

    auto range = students.equal_range("Ali");

    for(auto it = range.first; it != range.second; it++){
        cout << it->second << endl;
    }
    return 0;
}