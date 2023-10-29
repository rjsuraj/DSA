class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int start = 0,end = arr.size()-1,mid;

        while(start<=end){

            mid = end + (start-end)/2;

            if(target == arr[mid])
                return mid;
            else if(target > arr[mid])
                start = mid+1;
            else 
                end = mid-1;

        }
        return start;
    }
};