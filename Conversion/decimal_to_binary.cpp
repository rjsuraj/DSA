#include<iostream>
using namespace std;

int main()
{
    int no;
    long long int ans = 0, mul = 1;
    cout<<"enter the number: ";
    cin>>no;
    while(no != 0){
        // getting reminder
        int rem = no % 2;
        //getting quotient
        no = no/2;

        //storing the converted binary number
        ans = (rem * mul) + ans;
        
        //increasing power of 10
        mul *= 10;
    }

    cout<<"binary : "<<ans;
}