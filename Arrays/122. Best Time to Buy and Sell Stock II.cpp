https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/discuss/1336030/C%2B%2B-or-Optimal-Solution-or-Time-O(N)-or-Space-O(1)-or

/*			7
				\     5    6 
				 \    /\  /\
				  \  /  \/  4 --------->[7,1,5,3,6,4]
				   \/	  3		  
           1
Valley to Peak approach : Add all gains from positive slopes i.e. profit = (5-1) + (6-3) = 7
*/

//Optimal Solution 

class Solution {
public:
    int maxProfit(vector<int>& prices) {
	// Optimal Solution
        int res = 0;
        for (int i = 1; i < prices.size(); ++i)
            res += max(prices[i] - prices[i - 1], 0);
        return res;
    }
};
//All suggestions are welcome. Please upvote if you like it.
