#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> symbols = {{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3},};
string isBalanced(string s){
    stack<char> st;
    for(char brackets : s){
        if(symbols[bracket] < 0){
         st.push(bracket);
}else{
      if(!st.empty())   return "NO";
      char top = st.top();
      st.pop();
      if(symbols[top] + symbols[brackets] != 0){
          return "NO";
       }
   }
  }
  if(!st.empty())   return "YES";
     return "NO";
}

int main(){
    int t;
    cout << "Enter number of strings: ";
    cin >> t;
    cout << "Enter strings: " << endl;
    while(t--){
    string s;
    cin >> s;
    cout << isBalanced(s) << endl;
    
    }
}