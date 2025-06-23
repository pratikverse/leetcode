class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int minval = prices[0];
    int maxProfit = 0;
    int cost = 0;
    for(int i = 1; i<n; i++){
      cost = prices[i]-minval;
      maxProfit = max(cost, maxProfit);
      minval = min(minval, prices[i]);
    }
    return maxProfit;
}
};