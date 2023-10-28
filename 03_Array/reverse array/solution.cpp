#include<iostream>
using namespace std;

int main()
{
    int arr[] = {2,3,4,5,6};
    int start = 0, end = 4;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    cout<<"reverse array is : ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}