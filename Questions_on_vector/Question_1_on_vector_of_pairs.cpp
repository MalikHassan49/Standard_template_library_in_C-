#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, string>> students;
    string name;
    int n, roll_no;

    cout << "Enter number of students: ";
    cin >> n;

    cout << "Enter roll number and name: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> roll_no;
        cin.ignore();
        getline(cin, name);
        // students.push_back(make_pair(roll_no, name));
        students.push_back({roll_no, name});
    }
    cout << endl;

    for (auto s : students)
    {
        cout << "ROLL_NO: " << s.first << " Name: " << s.second << endl;
    }

    return 0;
}