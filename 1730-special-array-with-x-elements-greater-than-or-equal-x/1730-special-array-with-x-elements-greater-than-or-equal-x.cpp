class Solution {
public:
    int specialArray(vector<int>& arr) {
        //answer range lies between 1-arr.size()
        int freq[101] = {0};
        //count --> store count of the number >= to ans
        int count = 0 , ans = -1;

        for(int i=0; i<arr.size(); i++){

            //we don't need to store the frequency of element which is  greater than arr size because ans lie in [1,arr.size()]
            if(arr[i] <= arr.size())
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