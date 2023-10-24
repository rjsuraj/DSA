#include<bits/stdc++.h>
using namespace std;


// vector

void print(vector<int> &v){
    for(auto i: v)
        cout<<i<<" ";
    cout<<endl;
}

int main(){
    vector<int> v;
    
    // both are for inserting element in vector but emplace_back is fast
    v.push_back(1);
    v.emplace_back(2); 
    print(v);
    
    // for inserting emplace_back don't use {} to insert pairs in vector while 
    // push_back does use {}
    vector<pair<int,int>> v1;
    v1.push_back({1,2});
    v1.emplace_back(3,4);

    for(int i=0;i<v1.size();i++){
        cout<<v1[i].first<<" "<<v1[i].second<<endl;
    }

    // specify the intial size(not fixed size) of vector and its value
    // v = {200,200,200,200,200}
    vector<int> v2(5,200);

    // if only provide size then default value be 0
    // v = {0,0,0,0,0}
    vector<int> v3(4);
    print(v2);
    print(v3);

    // copying one vector to another
    vector<int> v4(2,10);
    vector<int> v5(v4);
    print(v5);

    // erasing and inserting in vector;
    vector<int> v6 = {10,20,30,40,50};
    v6.erase(v6.begin()+1,v6.begin()+3);
    print(v6);
}