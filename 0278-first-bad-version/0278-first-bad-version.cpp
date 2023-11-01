// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s=1,e=n,mid,ans;

        if(n == 1)
            return 1;

        while(s<=e){
            mid = e+(s-e)/2;

            if(isBadVersion(mid) == true){
                ans = mid;
                e = mid-1;
            }
            else
                s = mid+1;

        }

        return ans;
    }
};