#include<bits/stdc++.h>
using namespace std;


// Pairs

int main(){
    // intilaization and accessing pair values
    pair<int,int> p = {1,2};
    cout<<p.first<<p.second<<endl;

    // nested pair
    pair<int,pair<int,int>> p1 = {1,{3,4}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

    // pair array
    pair<int,int> arr[] = {{1,2},{2,3},{3,4}};
    cout<<arr[2].first;
}