https://leetcode.com/problems/two-sum/discuss/1328401/C%2B%2B-or-Brute-force-and-Efficient-Solution-or-Time-O(N)

// Brute Force Solution(Commented)

/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		    //Brute Force Solution
        int len=nums.size();
        for(int i=0;i<len;i++){
			for(int j=i+1;j<len;j++){
               if(nums[i]+nums[j]==target){
                   return {i,j};
               }
           }
       } 
        return {}; 
	}
};
*/

// Efficient Solution

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){      
		    //Efficient Solution using hashmap
        int len=nums.size();
        unordered_map<int,int> m;
        for(auto i=0;i<len;i++){
            if(m.find(target-nums[i])!=m.end()){
                return {i,m[target-nums[i]]};
        }
        m[nums[i]]=i;
        }
        return {};
    }
};

//All suggestions are welcome. Please upvote if you like it.
