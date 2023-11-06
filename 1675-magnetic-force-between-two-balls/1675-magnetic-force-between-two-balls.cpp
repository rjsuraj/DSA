class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n = position.size();
        int start = 1, end = position[n-1] - position[0];
        int mid, ans;

        while(start <= end){
            mid = end + (start - end)/2;
            //mid is force between two balls

            //counting how many ball can be put in basket if
            //minimum force between two ball is mid
            int count = 1, pos = position[0];
            for(int i=0; i<n; i++){

                if(position[i] >= pos+mid){
                    
                    count++;
                    pos = position[i];
                }
            }

            if(count < m)
                end = mid-1;
            else{
                ans = mid;
                start = mid+1;
            }

        }

        return ans;
    }
};