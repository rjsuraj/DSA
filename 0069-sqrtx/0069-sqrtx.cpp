class Solution {
public:
    int mySqrt(int x) {
       int ans,mid;
       int start=1,end=x;

       if(x == 0)
            return 0;
       while(start<=end){
           mid = end+(start-end)/2;
           
           if(mid == x/mid)
                return mid;
           else if(mid > x/mid)
                end = mid-1;
           else{
               ans = mid;
               start = mid+1;
           }
       }

       return ans;
    }
};