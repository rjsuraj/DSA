class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size();
        //edge cases
        if(n == 1)
            return arr[0];
        //if first element is minimum
        if(arr[0]<arr[1] && arr[0]<arr[n-1])
            return arr[0];
        //if last element is minimum
        if(arr[n-1]<arr[n-2] && arr[n-1]<arr[0])
            return arr[n-1];

        int start = 1,end = n-2, mid;
        while(start <= end){
            
            mid = start + (end-start)/2;
            
            if(arr[mid]<arr[mid+1] && arr[mid]<arr[mid-1])
                return arr[mid]; //minimum element
            else if(arr[mid] > arr[0])
                start = mid+1; //right part search
            else 
                end = mid-1;//left part search

        }
        return -1;
    }
};