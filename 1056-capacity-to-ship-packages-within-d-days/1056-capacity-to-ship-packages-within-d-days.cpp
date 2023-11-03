class Solution {
public:
    int shipWithinDays(vector<int>& arr, int days) {
        
        int start = *max_element(arr.begin(),arr.end());
        int end = accumulate(arr.begin(),arr.end(),0);
        int ans, mid;

        while(start <= end){

            mid = start + (end - start)/2;

            int countDays = 1, weight = 0;
            for(int i=0; i<arr.size(); i++){

                if(weight + arr[i] <= mid){
                    //current day
                    weight += arr[i];
                }
                else
                {
                    //next day
                    countDays++;
                    weight = arr[i];
                }
            }

            if(countDays <= days){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }

        return ans;
    }
};