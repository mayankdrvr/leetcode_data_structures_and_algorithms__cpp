https://leetcode.com/problems/running-sum-of-1d-array/discuss/1334814/C%2B%2B-or-Brute-force-and-Efficient-Solutions-or-Time-O(N)-or-Space-O(1)-or

//Brute Force Solution
/*
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
    //Brute Force Solution
    vector<int> result;
    int len=nums.size(),sum=0;
    for(int i=0;i<len;i++){
          sum=0;
        for(int j=0;j<=i;j++){
              sum+=nums[j];
        }
        result.push_back(sum);
    }
        return result;
    }
};
*/

//Efficient Solution

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
    //Optimal Solution
    int len=nums.size();
    for(int i=1;i<len;i++){
        nums[i]+=nums[i-1];
    }
        return nums;  
    }
};
//All suggestions are welcome. Please upvote if you like it.
