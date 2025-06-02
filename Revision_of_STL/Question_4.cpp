#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<vector<int>> v(3);
    int row;

    for (int i = 0; i < v.size(); i++)
    {
        cout << "Enter size of row " << i + 1 << " : ";
        cin >> row;
        vector<int> temp;
        cout << "Enter values in row " << i + 1 << endl;
        for (int j = 0; j < row; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    for (int i = 0; i < v.size(); i++)
    {
        printVec(v[i]);
    }
}