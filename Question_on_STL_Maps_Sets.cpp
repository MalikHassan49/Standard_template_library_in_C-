#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, multiset<string> > marks_map;
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        int marks;
        string name;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
        marks_map[-1*marks].insert(name);
     //   marks_map[marks].insert(name);
    }
    // auto curr_it = --marks_map.end();
    // while(true){
    //     auto &students = (*curr_it).second;
    //     int marks = (*curr_it).first;
    for(auto & students_marks_pr : marks_map){
        auto &students = students_marks_pr.second;
        int marks = students_marks_pr.first;
        for(auto student : students){
            cout << student << " " << -1*marks << endl;
        }
    }
        // if(curr_it == marks_map.begin()) break;
        // curr_it--;
    }
