#include <iostream>
using namespace std;

//         E 
//       E D 
//     E D C 
//   E D C B 
// E D C B A 
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // print space
        for (int j = 1; j <= n-i; j++)
            cout<<"  ";
        
        // print alphabet
        for(int j = 1; j <= i; j++)
            cout<<char('E'-(j-1))<<" ";
        
        cout << endl;
    }
}

int main()
{
    pattern(5);
}