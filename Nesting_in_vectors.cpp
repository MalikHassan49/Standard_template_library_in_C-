#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
    cout << "Size: " << v.size() << endl;
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
    cout << endl;
}

int main(){

        //      <---- Pair of Vectors ---->
    //vector<pair<int,int> > v;  // vector of pair
//       vector<pair<int,int> > v = {{1,2},{2,3},{3,4}};
//       printVec(v);

    //   vector<pair<int,int> > v;
    //   printVec(v);
    //   int n;
    //   cout << "Enter the size: ";
    //   cin >> n;
    //   for (size_t i = 0; i < n; i++)
    //   {
    //     int x,y;
    //     cin >> x >> y;
    //     v.push_back({x,y});
    //    // v.push_back(make_pair(x,y));
    //   }
    //   printVec(v);
 
        //        <---- Vectors of array  ---->
    // int N;
    // cout << "Enter number of vectors:";
    // cin >> N;
    // vector <int> v[N];
    // for (int i = 0; i < N; i++)
    // { 
    //     cout << "Enter the size of vector:" << i << endl;
    //     int n;
    //     cin >> n;
    //     for (int j = 0; j < n; j++)
    //     {
    //         int x;
    //         cin >> x;
    //          v[i].push_back(x);
    //     } 
    // }
    // for (int i = 0; i < N; i++)
    // {
    //     printVec(v[i]);
    // }
    
        //         <---- Vector of vector ---->

        int N;
        cout << "Enter the size of vector: ";
        cin >> N;
        vector<vector<int> > v;
        for(int i = 0; i < N; i++){
            int n;
            cout << "Enter size of inner vector " << i << endl;
            cin >> n;
            vector<int> temp;
            cout << "Enter values in inner vector: " << endl;
            for(int j = 0; j < n; j++){
                int x;
                cin >> x;
                temp.push_back(x);
            }
            v.push_back(temp);
        }

    for(int i = 0; i < v.size(); i++){
       printVec(v[i]);
    }
    v[1].push_back(10);
    cout << endl;
}
 