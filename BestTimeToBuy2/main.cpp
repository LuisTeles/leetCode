#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int buyingPrice = prices[0];
        int length = prices.size();
        
        for (int i = 1; i < length; i++){
            if(prices[i] > buyingPrice){
                maxProfit += prices[i] - buyingPrice;
            }
            buyingPrice = prices[i];
        }
        return maxProfit;
    }
};