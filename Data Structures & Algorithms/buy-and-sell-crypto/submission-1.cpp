class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxbuy=0;
        int minbuy=prices[0];
        for(int x:prices){
            maxbuy=max(maxbuy,x-minbuy);
            minbuy=min(minbuy,x);
        }
        return maxbuy;
    }
};
