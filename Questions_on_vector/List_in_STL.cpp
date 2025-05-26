#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> mylist; //  list declaration

    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);
    mylist.push_back(40);

    mylist.push_front(5);

    //  displaying the list
    for (auto s : mylist)
    {
        cout << s << " ";
    }
    cout << endl;

    mylist.pop_front();
    mylist.pop_back();

    //  Displaying the list after popping front and back
    for (auto s : mylist)
    {
        cout << s << " ";
    }
    cout << endl;

    list<int>::iterator it;
    it = mylist.begin();
    //  advance(iterator, Position);
    advance(it, 1);
    mylist.insert(it, 15);

    cout << "After inserting 15 at second position: " << endl;
    for (auto s : mylist)
    {
        cout << s << " ";
    }
    cout << endl;

    it = mylist.begin();
    advance(it, 2);
    mylist.erase(it);

    cout << "List after deleting the element: " << endl;
    for (auto s : mylist)
    {
        cout << s << " ";
    }
    cout << endl;

    cout << "Size of list: " << mylist.size() << endl;

    mylist.clear();
    cout << "Is the list clear or not: " << (mylist.empty() ? "Yes" : "No") << endl;
    cout << "Size of list: " << mylist.size() << endl;

    return 0;
}

/*  Important Points:
push_back(x) → end mein insert karta hai.

push_front(x) → start mein insert karta hai.

pop_back() & pop_front() → elements hata dete hain.

insert(iterator, value) → kisi bhi position pe insert karta hai.

erase(iterator) → iterator wali position ka element hata deta hai.

advance(it, n) → iterator ko n steps aage le jata hai.

clear() → poori list saaf karta hai.

empty() → check karta hai ke list khaali hai ya nahi.
*/