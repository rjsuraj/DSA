class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n= arr.size();
        int start = 0,end = n-1,mid;
        int index = 0; //storing the minimum element index

        //finding the minimum element index
        //which divide the left and right sorted part
        while(start<=end){
            mid = start + (end-start)/2;
            
            if(arr[mid] >= arr[0]) //mid present in left sorted arr
                start = mid+1;
            else{                 //mid present in right sorted arr
                index = mid;
                end = mid-1;
            }
        }

        start = 0, end = n-1;

        //array is not rotated apply BS on whole array
        if(index == 0){
            start = 0;
            end = n-1;
        }
        // apply BS on left sorted part
        // because target founded in left part
        else if(target >= arr[0])
            end = index-1;
        // apply BS on right sorted part
        // because target founded in right part
        else
            start = index;
        
        //simple binary search either on left sorted part or
        //right sorted part
        while(start <= end){
            mid = start + (end-start)/2;

            if(target == arr[mid])
                return mid;
            else if(target > arr[mid])
                start = mid+1;
            else
                end = mid-1;
        }
        
        return -1;
    }
};