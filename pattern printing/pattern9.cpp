#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        for(int j=1;j<=n-i+1;j++)
            cout<<char('A'+i+j-2)<<" ";
        cout << endl;
    }
}