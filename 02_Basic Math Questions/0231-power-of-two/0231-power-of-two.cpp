class Solution {
public:
    bool isPowerOfTwo(int n) {
        int count = 0;
        if(n == 0)
            return false;
        while(n){
            int lastBit = n&1;
            n = n>>1;
            if(lastBit == 1){
                count++; 
                if(count > 1)
                    return false;
            }
        }

        return true;
    }
};