class Solution {
public:
    int bitwiseComplement(int n) {
        int mask = 0, temp = n;
        if(n == 0)
            return 1;
        while(temp){
            mask = (mask<<1) + 1;
            temp = temp>>1;
        }

        return mask^n;
    }
};