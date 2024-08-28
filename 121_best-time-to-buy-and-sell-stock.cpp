-------------- LEET-CODE --------------
class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];  
            } else if (prices[i] - minPrice > maxProfit) {
                maxProfit = prices[i] - minPrice;  
            }
        }

        return maxProfit;
    }
};


----------------- FULL-CODE ----------------


#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];  
            } else if (prices[i] - minPrice > maxProfit) {
                maxProfit = prices[i] - minPrice;  
            }
        }

        return maxProfit;
    }
};

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};  
    Solution solution;
    int profit =solution.maxProfit(prices);
    cout << "Maximum Profit: " << profit << endl;  
    return 0;
}

