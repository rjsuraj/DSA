#include <iostream>
using namespace std;

//         A 
//       A B A 
//     A B C B A 
//   A B C D C B A 
// A B C D E D C B A 

int main()
{
    int n;
    cout << "enter the input number : ";
    cin >> n;

    // upper part
    for (int i = 1; i <= n; i++)
    {
        // print space
        for(int j=1;j<=n-i;j++)
            cout<<"  ";
        // 'A' to 'A'+j-1
        for(char j='A';j<='A'+i-1;j++)
            cout<<j<<" ";
        // 'A'+i-2 to 'A'
        for(char j= 'A'+i-2;j>='A';j--)
            cout<<j<<" ";

        cout<<endl;
    }

    

}