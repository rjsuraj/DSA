#include<bits/stdc++.h>
using namespace std;



int main() {
    int arr[] = {-2,-2,1,-2,0,-3,-4,-4,0};
    int n = 9;
    int max = *max_element(arr,arr+n);
    sort(arr,arr+n);
    int i;
    for(i=1;i<=max;i++){
            
        // if(!(find(arr,arr+n,i) != arr+n))  //linear search
        //     return i;

        if( !(binary_search(arr,arr+n,i)) ){
            cout<<"ans"<<i;
            return 0;
        } 
    }
        
    cout<<i;
}
