#include<iostream>
using namespace std;

int max(int arr[],int size){
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(max<arr[i])
            max = arr[i];
    }

    return max;
}

int min(int arr[],int size){
    int min = INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<min)
            min = arr[i];
    }
    return min;
}

int main()
{
    int arr[] = {3,23,22,1,55,12,0,32};
    cout<<"max element in array is : "<<max(arr,8)<<endl;
    cout<<"min element in array is : "<<min(arr,8)<<endl;
}