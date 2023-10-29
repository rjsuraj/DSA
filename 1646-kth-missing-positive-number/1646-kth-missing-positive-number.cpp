class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count2 = arr[0]-1;
        int count1 = count2, num = arr[0];
        if(count2 >= k)
            return k;

        for(int i=1;i<arr.size();i++){

            count2 += arr[i]-arr[i-1]-1;
            if(count2<k){
                num = arr[i];
                count1 = count2;
            }

        }

        return k-count1+num;
    }
};