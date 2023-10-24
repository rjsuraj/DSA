#include<bits/stdc++.h>
using namespace std;

int main(){
    int no;
    string ans;
    cout<<"enter the number : ";
    cin>>no;
    while(no){
        int rem = no % 16;
        no /= 16;
        if(rem < 10)
            ans += to_string(rem);
        else    
            ans += (rem + ('A'-10));  //converting (10 to 15) into A to F
    }
    reverse(ans.begin(),ans.end());

    cout<<"hexaDecimal : "<<ans;
}