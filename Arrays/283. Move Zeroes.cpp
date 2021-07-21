https://leetcode.com/problems/move-zeroes/discuss/1332325/C%2B%2B-or-Brute-force-and-Efficient-Solutions-or-Time-O(N)-or-Space-O(1)-or

//Brute Force Solution(Commented)

/*
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    // Brute Force Solution
    vector<int> a;
    int count=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0)
            count++;
        else
            a.push_back(nums[i]);
    }
    while(count--)
        a.push_back(0);
    for(int i=0;i<nums.size();i++){
        nums[i]=a[i];
    } 
  }
};
*/

//Efficient Solution

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    // Efficient Solution
    int lt=0,rt=0,n=nums.size();
    while(rt<n){
         if(nums[rt]==0)
              rt++;
         else{
	      int temp=nums[lt];
	      nums[lt]=nums[rt];
              nums[rt]=temp;
              lt++;
              rt++;
            }
        }
    }
};
//All suggestions are welcome. Please upvote if you like it.
