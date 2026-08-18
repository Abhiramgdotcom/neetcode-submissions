class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int count=0;
        for (int coin=coins.size()-1;coin>=0;coin--){
            while (amount >= coins[coin]){
                count++;
                amount-=coins[coin];
            }
        }
        if (amount) return -1;
        return count;
    }
};
