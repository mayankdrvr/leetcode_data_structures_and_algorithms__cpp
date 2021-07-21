https://leetcode.com/problems/remove-duplicates-from-sorted-array/discuss/1350762/C%2B%2B-or-Brute-Force-or-Optimal(Two-Pointer-Method)-or-Solution-or-Time-O(N)-or-Space-O(1)-or

//Brute Force Solution(Commented)

/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    // Brute Force Solution 
    // Time O(NlogN) as map insertion takes O(logN) time and loop runs for N such iterations  | Space O(N)
    vector<int> ans; 
    map<int,int> mp; 
    for(int i = 0; i < nums.size() ; i++){
        if(mp[nums[i]]==0)
            ans.push_back(nums[i]); // ans vector stores unique elements based on their first occurence in nums vector
        mp[nums[i]]++; // mp stores frequency of each unique element in nums vector
    }
    nums = ans; // ans vector has all unique elements in ascending order.
        // These unique elements are overwritten on initial indices of nums array.
    return ans.size();
}
};
*/

//Optimal Solution using Two Pointer method

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Optimal Solution 
		// Time O(N) | Space O(1) 
        // Two Pointer Method
        int len=nums.size();
        if(len==0)
            return 0;
        int p1=0; 
        for(int p2=1;p2<len;p2++){
            if(nums[p1]!=nums[p2]){
                // If elements at p1 & p2 not equal, increment p1 and copy 
                // nums[p2] to nums[p1] so as to concentrate all unique 
                // elements in ascending order at the initial indices of the vector
                p1++;
                nums[p1]=nums[p2];
            }
        }
        // p1 location is the final indice of the 
        // unique element subarray at the beginning of nums vector
        return p1+1;
    }
};

//All suggestions are welcome. Please upvote if you like it.
