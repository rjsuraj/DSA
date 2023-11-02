class Solution {
public:
    int specialArray(vector<int>& arr) {
        int freq[102] = {0}, n = arr.size();

        //storing occurence/frequency of numbers present in array
        for(int i=0; i<n; i++)
            //we use min here because we don't need to store the frequency
            //of that value which > n because ans lie in range [1,n]
            //so the values which > n for that we store the frequency to n
            freq[min(arr[i],n)]++; 

        //traversing the freq array from last
        for(int i=n; i>=0; i--){

            //accumlative frequency 
            freq[i] += freq[i+1];

            if(freq[i] == i)
                return i;

        }

        return -1;
            
    }
};