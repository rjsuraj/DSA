class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int firstOccur = -1,lastOccur = -1;
        int start = 0, end = arr.size()-1,mid;
        vector<int> ans;

        //finding first occurence
        while(start<=end){
            mid = end + (start-end)/2;

            if(target == arr[mid]){
                firstOccur = mid;
                end = mid-1; //left search
            }
            else if(target > arr[mid])
                start = mid+1;
            else
                end = mid-1;
        }

        start = 0; 
        end = arr.size()-1;
        //finding last occurence
        while(start<=end){
            mid = end + (start-end)/2;

            if(target == arr[mid]){
                lastOccur = mid;
                start = mid+1; //right search
            }
            else if(target > arr[mid])
                start = mid+1;
            else
                end = mid-1;
        }

        ans.push_back(firstOccur);
        ans.push_back(lastOccur);
        return ans;
    }
};