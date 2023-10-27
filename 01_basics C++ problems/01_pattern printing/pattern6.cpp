#include <iostream>
using namespace std;

//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
// * * * * * *
// * * * * * *
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *

// int main()
// {
//     int n;
//     cout << "enter the input number : ";
//     cin >> n;

//     // upper part
//     for (int i = 1; i <= n; i++)
//     {

//         // print space
//         for(int j=1;j<=n-i;j++)
//             cout<<" ";

//         // 1 to 2i-1
//         for(int j=1;j<=2*i-1;j++){
//             if(j%2)
//                 cout<<"*";
//             else 
//                 cout<<" ";
//         }

//         cout<<endl;
//     }

//     // lower part
//     for (int i = n; i >=1; i--)
//     {

//         // print space
//         for(int j=1;j<=n-i;j++)
//             cout<<" ";

//         // 1 to 2i-1
//         for(int j=1;j<=2*i-1;j++){
//             if(j%2)
//                 cout<<"*";
//             else 
//                 cout<<" ";
//         }

//         cout<<endl;
//     }

    

// }

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
            cout<<" ";

        // print "* "
        for(int j=1;j<=i;j++)
            cout<<"* ";

        cout<<endl;
    }

    // lower part
    for (int i = n; i >=1; i--)
    {

        // print space
        for(int j=1;j<=n-i;j++)
            cout<<" ";

        // print "* "
        for(int j=1;j<=i;j++)
            cout<<"* ";

        cout<<endl;
    }

    

}