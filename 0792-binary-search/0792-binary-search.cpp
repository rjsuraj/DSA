class Solution {
public:
    int search(vector<int>& arr, int target) {
        int start = 0,end = arr.size()-1,mid;

        while(start<=end){

            // not doing (start+end)/2 due to overflow
            mid = end + (start-end)/2; 
            
            //target founded
            if(target == arr[mid])
                return mid;

            //going to right side for searching
            else if(target > arr[mid])
                start = mid+1;

            //going to left side for searching
            else
                end = mid-1;

        }

        return -1;
    }
};