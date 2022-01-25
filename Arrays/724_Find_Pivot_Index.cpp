https://leetcode.com/problems/find-pivot-index/discuss/1335972/C%2B%2B-or-Brute-force-and-Efficient-Solution-or-Time-O(N)-or-Space-O(N)-or

//Brute Force Solution(Commented)

/*
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    // Brute Force Solution
    // Calculate the sum of elements to the left & right
    // of each index of nums vector and compare them to check equivalence
    int len=nums.size();
    if(len==1)
        return nums[0];
    for(int i=0;i<len;i++){
          int left=accumulate(nums.begin(),nums.begin()+i,0);
          int right=accumulate(nums.begin()+i+1,nums.end(),0);
          if(left==right)
              return i;
    }
      return -1;
    }
};
*/

//Efficient Solution

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    // Efficient Solution
    // Create a sum array in which each element stores 
    // the sum of elements of nums vector up to that index.
    // Calculate left & right sum. For example-
    // nums[]=[1,7,3,6,5,6]
    // sum[]= [1,8,11,17,22,28]
    // left[3]=17-6=11
    // right[3]=28-17=11
    // return 3
    int len=nums.size();
    if(len==1)
        return 0;
    int sum[len];
    sum[0]=nums[0];
    for(int i=1;i<len;i++){
        sum[i]=nums[i]+sum[i-1];
    }
    for(int i=0;i<len;i++)
    {
        int left=sum[i]-nums[i];
        int right=sum[len-1]-sum[i];
            
    if(left==right)
        return i;
    }
      return -1;
    }
};
//All suggestions are welcome. Please upvote if you like it.
