class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = prices[0], mx = 0, res = 0;
        for(int i = 1; i < prices.size(); i++) {
            if (mx < prices[i]) mx = prices[i];
            else {
                if (mx > mn) res += (mx - mn);
                mn = prices[i];
                mx = 0;
            }
            if (prices[i] < mn) mn = prices[i];
            cout << i << " " << prices[i] << " " << mn << " " << mx << " " << res<< '\n';
        } 
        if (mx) res += (mx - mn);
        return res;
        
    }
};