class Solution {
public:
    int mySqrt(int x) {
       if(x == 0) 
         return 0;
       int ans;
       for(int i=1;i<=x;i++){
           if(i <= x/i)
             ans = i;
           else
             break;
       }
       return ans;
    }
};