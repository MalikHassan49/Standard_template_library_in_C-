#include <bits/stdc++.h>
using namespace std;

void printVec(vector<string> &v){
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        // v.size()  --> O(1)
        cout << v[i] << " ";
    }
    cout << endl;
    
}
int main(){

    //                  <---- Vectors ---->

   // int a[10];
  //  vector<int> v;  // size = 0;
    // int n;
    // cout << "Enter the size: ";
    // cin >> n;
    // for(int i = 0; i < n; i++){
    //     int x;
    //     cin >> x;
    //     printVec(v);
    //     v.push_back(x); // O(1)
    // }
    // vector<int> v(10, 3);
    // v.push_back(6);
    // printVec(v);
    // v.pop_back();   // O(1)
    // printVec(v);
    // vector<int> v1 = v;  //  O(n)
    // v1.push_back(15);
    // v1.push_back(16);
    // printVec(v);
    // printVec(v);
    // printVec(v1);

    // vector<int> v(10, 4);
    // v.push_back(6);
    // printVec(v);
    // vector<int> &v1 = v;
    // printVec(v1);
    // printVec(v);
    // v1.push_back(135);
    // printVec(v1);
    // printVec(v);
    vector<string> v;
    int n;
    cout << "Enter the size: ";
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    printVec(v);
    
}

//                <---- Pairs ---->
//     int main(){
 //   pair<int,string> p;
//     //p = make_pair(1,"Hassan");
//     p = {2,"Raza"};
//   //  pair<int, string> p1 = p;  
//       pair<int, string> &p1 = p;
//     p1.first = 3;
//     cout << p.first << " " << p.second << endl;
//     int a[] = {1,2,3};
//     int b[] = {2,3,4};
//     // array of pair
//     pair<int,int> p_array[3];
//     p_array[0] = {1,2};
//     p_array[1] = {2,3};
//     p_array[2] = {3,4};
//     swap(p_array[0],p_array[2]);
//     for(int i = 0; i < 3; i++)
//         cout << p_array[i].first << " " << p_array[i].second << endl;
//     }
    //    cout << "Enter a number: ";
    //    cin >> p.first;
    //    cout << p.first;
//}