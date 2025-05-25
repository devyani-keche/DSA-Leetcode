class Solution {
public:

    int maxProfit(vector<int>& prices) {
       
        int max1 = 0;  
        int current = 0;
        
        for (int i = 0; i < prices.size()-1; i++) {
            current += prices[i+1]-prices[i];
            if (current > max1) max1 = current;
            if (current < 0) current = 0;
        }
        if(max1<0) return 0;
        return max1;
    }
};