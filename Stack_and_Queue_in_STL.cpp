#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout << endl;

    //         <----- Queue ----->
    queue<string> q;
    q.push("abc");
    q.push("bcd");
    q.push("cde");
    q.push("def");
    q.push("efg");
    q.push("fgh");
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
}