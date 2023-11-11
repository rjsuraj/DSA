class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size() == 1)
            return 1;

        //start track the right position where we store unique elements
        //and traverse the array to find unique elements
        int start = 1, end = 1;
        while(end <= nums.size()-1){

            if(nums[end] != nums[end-1]){

                nums[start] = nums[end];
                start++;
                end++;
            }
            else
                end++;
        }

        return start;
    }
};