#include <iostream>
using namespace std;

//           1 
//         1 2 1 
//       1 2 3 2 1 
//     1 2 3 4 3 2 1 
//   1 2 3 4 5 4 3 2 1 
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // print space
        for (int j = 1; j <= n-i; j++)
            cout<<"  ";
        
        // print number part 1
        for(int j = 1; j <= i; j++)
            cout<<j<<" ";
        
        // print numnber part 2
        for(int j = i-1; j >= 1; j--)
            cout<<j<<" ";

        cout<<endl;
    }
}

int main()
{
    pattern(6);
}