class Solution {
public:
    int findMin(vector<int>& arr) {

        int start = 0 ,end = arr.size()-1,mid;
        int ans = arr[0]; // when array is not rotated then first   element is minimum

        while(start <= end){

            mid = end + (start - end)/2;

            //we are in left sorted part
            if(arr[mid] >= arr[0]){
                start = mid+1;             //right search
            }
            //we are in right sorted part
            else{
                ans = arr[mid];
                end = mid-1;              //left search
            }
                
        }
        
        return ans;
    }
};