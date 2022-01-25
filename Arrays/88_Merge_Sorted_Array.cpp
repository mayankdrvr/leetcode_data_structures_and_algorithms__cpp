https://leetcode.com/problems/merge-sorted-array/discuss/1334742/C%2B%2B-or-Brute-force-and-Optimal-Solution-or-Time-O(N)-or-Space-O(1)

//Brute Force Solution(Commented)
/*
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) { 
    // Brute force approach
    // Just overwrite nums2 on nums1 starting 
    // from the point where non zero element ends in nums1 
    for(int i=m;i<m+n;i++){
        nums1[i]=nums2[i-m];
    }
    // Sort function has O(NlogN) time complexity
        sort(nums1.begin(),nums1.end()); 
  }
};
*/

//Optimal Solution

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) { 
    // Optimal Solution
    // Two pointer approach 
    int p1 = m - 1, p2 = n - 1, curr=m+n-1;
    for (int i = curr; i >= 0 && p2 >=0 ;i--) {  
            if (p1 >= 0 && nums1[p1] > nums2[p2]) 
                nums1[i] = nums1[p1--]; 
            else 
                nums1[i] = nums2[p2--];
        }  
    }
};

//All suggestions are welcome. Please upvote if you like it.
