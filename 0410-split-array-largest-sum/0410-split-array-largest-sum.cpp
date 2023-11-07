class Solution {
public:
    int splitArray(vector<int>& arr, int K) {
        int N = arr.size(); 
        int start = *max_element(arr.begin(),arr.end());
        int end = accumulate(arr.begin(),arr.end(),0);
        int mid, ans;
        
        while(start <= end){
            
            mid = end + (start - end)/2;
            
            int count = 1, sum = 0;
            for(int i=0; i<N; i++){
                
                if(sum+arr[i] <= mid)
                    sum += arr[i];
                else{
                    count++;
                    sum = arr[i];
                }
            }
            
            if(count > K)
                start = mid+1;
            else{
                ans = mid;
                end = mid-1;
            }
        }
        
        return ans;
    }
};