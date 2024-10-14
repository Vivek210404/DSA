class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        // int diff = 0;
        // int curr= 0;
        // int buy = prices[0];
        // for(int i=1;i<n;i++){
        //     if(prices[i]<buy){
        //         buy = prices[i];
        //     }
        //     else{
        //         curr = prices[i]-buy;
        //         if(diff<curr){
        //             diff = curr;
        //         }
        //     }
        // }
        // return diff;

        int mini = prices[0];
        int maxProfit = 0;
        for(int i=0;i<n;i++){
            int cost = prices[i]-mini;
            maxProfit = max(maxProfit,cost);
            mini = min(mini,prices[i]);
        }
        return maxProfit;
    }
};