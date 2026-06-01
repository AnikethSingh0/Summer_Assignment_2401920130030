class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int>suf(n,0);
        int maxi = prices[n - 1];
        suf[n - 1] = prices[n - 1];
        for(int i = n - 2;i >= 0;i--){
            suf[i] = max(maxi,prices[i]);
            maxi = max(maxi,prices[i]);
        }
        int ans = 0;
        for(int i = 0;i < n;i++){
            int profit = suf[i] - prices[i];
            ans = max(ans,profit);
        }
        if(ans < 0)return 0;
        return ans;
        
    }
};