class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count= arr[0]-1, num = arr[0];
        if(count >= k)
            return k;

        for(int i=0;i<arr.size();i++){

            if(arr[i] == num)
                num++;
            else{
                count++;
                if(count == k)
                    return num;
                num++;
                i--;
            }
        }

        return k-count+num-1;
    }
};