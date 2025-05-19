//    inbulit ---> introsort = quick sort + heap sort + insertion sort
//    Strat from quick sort if depth of recurion is increase it moves to the heap sort
//    And if number of elements are few it use insertion sort

#include <bits/stdc++.h>
using namespace std;

int main(){
    //  int n;
    //  cout << "Enter the size of array: ";
    //  cin >> n;
    //  int a[n];
    //  cout << "Enter elements in array for sorting: " << endl;
    //  for(int i = 0; i < n; i++){
    //      cin >> a[i];
    //  }
    //  sort(a, a + n);
    //     for(int i = 0; i < n; i++){
    //         cout << a[i] << " ";
    //     }
    //     cout << endl;

    int n;
     cout << "Enter the size of vector: ";
     cin >> n;
     vector<int> a(n);
     cout << "Enter elements in array for sorting: " << endl;
     for(int i = 0; i < n; i++){
         cin >> a[i];
     }
     sort(a.begin(), a.end());
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    
}
//Time complexicity is O(nlog(n)) of intro sort
