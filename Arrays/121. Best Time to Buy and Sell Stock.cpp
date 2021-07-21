https://leetcode.com/problems/best-time-to-buy-and-sell-stock/discuss/1330044/C%2B%2B-or-Brute-force-and-Efficient-Solution-or-Time-O(N)-or-Space-O(1)

//Brute Force Solution(Commented)
/*
class Solution {
public:
    int maxProfit(vector<int>& prices) { 
    // Brute force approach
    int len=prices.size(),profit=0;
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                if(prices[j]>prices[i]){
                    int pro=prices[j]-prices[i];
                    profit=max(profit,pro);
                }
            }
        }
    return profit; 
  }
};
*/

//Efficient Solution

class Solution {
public:
    int maxProfit(vector<int>& prices) {
    // Efficient Solution
    int min_val=INT_MAX,profit=0,len=prices.size();
    for(int i=0;i<len;i++){
          min_val=min(min_val,prices[i]);
          profit=max(profit,prices[i]-min_val);
        }
    return profit;
    }
};

//All suggestions are welcome. Please upvote if you like it.
