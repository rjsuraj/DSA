class Solution {
public:
    int specialArray(vector<int>& arr) {
        int freq[1001] = {0};
        int count = 0 , ans = -1;

        for(int i=0; i<arr.size(); i++){

            freq[arr[i]]++;

            if(ans <= arr[i]){

                count++;
                if(count > ans){

                    ans = count;
                    count = count - freq[ans-1];
                }
            }
        }

        if(ans == count)
            return ans;
        else
            return -1;
    }
};