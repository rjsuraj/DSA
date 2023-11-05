class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1;
        long long int end = 0, mid, ans;
        for(auto value : piles)
            end += value;

        while(start <= end){
            
            //mid is amount of banana can be eaten in 1 hour
            mid = end + (start - end)/2;

            //calculating total time taken to eat all bananas
            //if speed of eating banana is mid/hr
            long long int totalTime = 0;
            for(int i=0; i<piles.size(); i++){

                totalTime += piles[i]%mid ? (piles[i]/mid)+1 : piles[i]/mid;
            }

            if(totalTime > h)
                start = mid+1;
            else{
                ans = mid;
                end = mid-1;
            }
        }

        return ans;
    }
};