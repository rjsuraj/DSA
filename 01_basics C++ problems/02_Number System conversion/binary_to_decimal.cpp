#include <iostream>
using namespace std;

int main()
{
    int no, ans = 0, mul = 1;
    cout << "enter the binary number: ";
    cin >> no;
    while (no != 0)
    {
        //getting reminder
        int rem = no&1;
        //getting quotient
        no /= 10;

        //storing converted decimal no
        ans = (rem*mul) + ans;

        //increasing power of 2 
        mul *= 2;
    }

    cout<<"Decimal : "<<ans;
}