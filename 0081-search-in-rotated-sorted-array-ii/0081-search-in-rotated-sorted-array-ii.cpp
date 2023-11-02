class Solution {
public:
    bool search(vector<int>& arr, int target) {

        int start = 0, end = arr.size()-1, mid;

        while(start <= end){

            mid = (start+end)/2;

            if(arr[mid] == target)
                return true;
            
            else if(arr[mid] == arr[start])
                start++;
            
            else if(arr[mid] > arr[start]){  //right sorted part
                
                if(target>=arr[start] && target<=arr[mid])
                    end = mid-1;
                else
                    start = mid+1;
            } 

            else{  //left sorted part

                if(target>=arr[mid] && target<=arr[end])
                    start = mid+1;
                else
                    end = mid-1;
            }
        }

        return false;
        
    }
};