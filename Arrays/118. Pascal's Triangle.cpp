https://leetcode.com/problems/pascals-triangle/discuss/1350114/C%2B%2B-or-Commented-or-Solution-or-Time-O(N2)-or-Space-O(N2)

//Optimal Solution(Commented)

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
	vector<vector<int>> ret(numRows);
	for (int i = 0; i < numRows; i++) {
	ret[i].resize(i+1); // Resize number of elements in each row from from numRows to i+1 
        ret[i][0]=1; ret[i][i]=1; // Put 1's at first & last element of each row
	for (int j = 1; j < i; j++) {
		// Assigning element values in row from second element to second last element
		// by adding corresponding jth & (j-1)th element in previous row
		// as shown in question animation
		ret[i][j] = ret[i - 1][j] + ret[i - 1][j - 1];
	}
	}
	return ret;
}
};

//All suggestions are welcome. Please upvote if you like it.
