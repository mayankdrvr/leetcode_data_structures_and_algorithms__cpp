https://leetcode.com/problems/majority-element/discuss/1336949/C%2B%2B-or-Brute-Force-or-Efficient-or-Optimal(Moore's-Voting-Algorithm)-or-Time-O(N)-or-Space-O(1)

//Brute Force Solution(Commented) : Time O(NlogN) & Space O(1)

/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Brute Force Solution
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};
*/

//Better Solution(Commented) : Time O(N) & Space O(N)

/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Better Solution
        map<int,int> m;
        int len=nums.size(), pos;
        for(int i=0;i<len;i++){
            m[nums[i]]++;
        if(m[nums[i]]>(len/2))
            pos=i;
        }
        return nums[pos];
    }
};
*/

//Optimal Solution : Time O(N) & Space O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Optimal Solution
        // Boyer–Moore Majority Voting Algorithm
        int len=nums.size(), maj=nums[0], count=1;
        for(auto i=1;i<len;i++){
            if(nums[i]==maj)
                count++;
            else
                count--;
            if(count==0){
                maj=nums[i];
                count=1;
            }
        }
        return maj;
    }
};
//All suggestions are welcome. Please upvote if you like it.
