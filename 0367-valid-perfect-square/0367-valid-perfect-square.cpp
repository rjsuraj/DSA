class Solution {
public:
    bool isPerfectSquare(int num) {

        int start = 1, end = num, mid;

        while(start <= end){

            mid = end + (start-end)/2;

            if(mid*1LL*mid == num)
                return true;

            else if(mid*1LL*mid > num)
                end = mid-1;
            
            else
                start = mid+1;
        }

        return false;
        
    }
};