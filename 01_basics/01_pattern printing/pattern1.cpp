#include <iostream>
using namespace std;

//     1
//    12
//   123
//  1234

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // print space
        for (int j = 1; j <= n-i; j++)
            cout<<" ";
        
        // print number 
        for(int j = 1; j <= i; j++)
            cout<<j;
        
        cout << endl;
    }
}

int main()
{
    pattern(7);
}