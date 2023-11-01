class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        if((arr[0]-1) >= k)
            return k;
        
        int start = 0, end = arr.size()-1, mid, ans;
        while(start <= end){

            mid = end  + (start - end)/2;

            if((arr[mid]-mid-1) < k){
                ans = mid;
                start = mid+1;
            }
            else
                end = mid-1;
        }

        // return arr[ans] + (k - (arr[ans]-ans-1));
        return ans + k + 1;
    }
};