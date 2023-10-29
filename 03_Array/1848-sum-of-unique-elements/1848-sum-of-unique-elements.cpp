class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int freq[101] = {0};
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }

        int ans = 0;
        for(int i=0;i<nums.size();i++){
            if(freq[nums[i]] == 1)
                ans += nums[i];
        }

        return ans;
    }
};