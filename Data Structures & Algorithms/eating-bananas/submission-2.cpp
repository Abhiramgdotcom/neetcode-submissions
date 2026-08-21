class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int high=*max_element(piles.begin(),piles.end());
        int low=1;
        int count=0;
        int ans=INT_MAX;
        while(low <= high){
            int mid= low + (high-low)/2;
            for (int pile : piles){
                if(pile % mid > 0) count+=(pile/mid)+1;
                else count+=pile/mid;
            }
            if (count > h){
                low=mid+1;
            }
            else{
                ans=min(ans, mid);
                high=mid-1;
            }
            count=0;
        }
        return ans;
    }
};
