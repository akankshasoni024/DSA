class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestBuy= INT_MAX,maxProfit=0;
        for (int i =0; i<prices.size();i++){
            if(prices[i] < bestBuy){
                bestBuy = prices[i];
            }
            else{
                 maxProfit = max(maxProfit, prices[i] - bestBuy);
            }
        }
            if(maxProfit>0){
                    return maxProfit;
                 }
        return 0;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0, bestBuy=prices[0];
        for(int i =1;i<prices.size();i++){
            //check if profit will be there or not
            if(prices[i]>bestBuy){
                maxProfit=max(maxProfit,prices[i]-bestBuy);
            }
            bestBuy=min(bestBuy,prices[i]);
        }
        return maxProfit;
    }
};