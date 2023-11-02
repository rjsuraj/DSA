class Solution {
public:
    int specialArray(vector<int>& arr) {
        
        int start = 1, end = arr.size(), mid;

        //binary search in answer range [1,arr.size()]
        while(start <= end){

            mid = (start + end)/2;

            //calculating the number which >= mid
            int count = 0;
            for(int i=0; i<arr.size(); i++){

                if(arr[i] >= mid)
                    count++;
            }

            if(count == mid)
                return mid;
            else if(count < mid)
                end = mid-1; 
            else
                start = mid+1;    
        
        }

        return -1;
    }
};