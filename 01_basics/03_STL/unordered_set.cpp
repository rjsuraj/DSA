#include <bits/stdc++.h>
using namespace std;

void print(unordered_set<int> &v)
{
    for (auto i : v)
        cout << i << " ";
    cout << endl;
}

int main()
{
    unordered_set<int> s;
    for (int i = 1; i <= 10; i++)
        s.insert(i);
    cout << "the elements in unordered set is : ";
    print(s);

    if (s.find(2) != s.end())
        cout << "2 is present in set";
    else
        cout << "2 is not present in set";

    cout << endl;

    s.erase(s.begin());
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}