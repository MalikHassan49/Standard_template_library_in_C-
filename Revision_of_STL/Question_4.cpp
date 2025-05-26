#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v(3);
    int r1, r2, r3;
    cout << "Enter size of first row: ";
    cin >> r1;
    cout << "Enter size of second row: ";
    cin >> r2;
    cout << "Enter size of third row: ";
    cin >> r3;
    cout << "Enter elements in R1: " << endl;
  
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            cin >> v[i][j];
        }
       
        for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            cin >> v[i][j];
        }
    }

    int show_row;
    show_row = r1;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < show_row; j++)
        {
            cout << v[i][j];
        }
        if (show_row == (r1 - 1))
        {
            show_row = r2;
        }
        else if (show_row == (r2 - 1))
        {
            show_row = r3;
        }
    }

    return 0;
}