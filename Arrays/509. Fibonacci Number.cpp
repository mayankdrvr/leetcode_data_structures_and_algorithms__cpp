https://leetcode.com/problems/fibonacci-number/discuss/1349762/C%2B%2B-or-Brute-Force-or-Efficient-or-Optimal-or-Solution-or-Time-O(1)-or-Space-O(1)

/*
//Brute Force Solution(Commented)

class Solution {
public:
	int fib(int n) {
	// Brute Force Solution
	if(n==0 || n==1){
		return n;
	}
	return fib(n-1) + fib(n-2);
	}
};

//Efficient Solution(Commented)(Dynamic Programming Bottom Up Approach)

Using sum vector to store intermediate fibonacci numbers computed in order to avoid redundant calculations. Time O(N) & Space O(N)

class Solution {
public:
	int fib(int n) {
	// Efficient Solution
	if(n==0 || n==1){
		return n;
	}
	int sum[n + 1];
	sum[0] = 0; sum[1] = 1;
	for(int i = 2; i <= n; i++){
		sum[i] = sum[i - 1] + sum[i - 2];
	}
	return sum[n];
	}
};


//Efficient Solution(Commented)(Dynamic Programming Bottom Up Approach(Storing the two most recent intermediate fibonacci numbers //calculated)

//Time O(N) & Space O(1)

class Solution {
public:
	int fib(int n) {
	// Efficient Solution
	if(n==0 || n==1){
	        return n;
	}
	int f_minus_1 = 0, f = 1;
	for(int i = 2; i <= n; i++){
		f = f + f_minus_1;
		f_minus_1 = f - f_minus_1;
	}
	return f;
	}
};

//Efficient Solution(Commented)(Matrix Multiplication & Binary Exponentiation)

//Time is O(logN). Space O(logN) due to recursive stack calls in power() function.

// Matrix mulplication
/*
| fib(n) |   |1  1|   |fib(n-1)|
|        | = |    | * |        |    
|fib(n-1)|   |1  0|   |fib(n-2)|

For n=2,

|fib(2)|   |1  1|   |fib(1)| 
|      | = |    | * |      |        
|fib(1)|   |1  0|   |fib(0)|

For n=3,

|fib(3)|   |1  1|^2     |fib(1)| 
|      | = |    |   *   |      |      
|fib(2)|   |1  0|       |fib(0)|

General Expression :

| fib(n) |   |1  1|^(n-1)        |fib(1)=1|
|        | = |    |       *      | 	  |
|fib(n-1)|   |1  0|              |fib(0)=0|
*/
/*
class Solution {
public:
	void mul(int A[2][2], int B[2][2])
	{
        	// Multiplying 2x2 matrices in time O(1)
        	int A00 = (A[0][0] * B[0][0]) + (A[0][1] * B[1][0]);
        	int A01 = (A[0][0] * B[0][1]) + (A[0][1] * B[1][1]);
        	int A10 = (A[1][0] * B[0][0]) + (A[1][1] * B[1][0]);
        	int A11 = (A[1][0] * B[0][1]) + (A[1][1] * B[1][1]);
        	A[0][0] = A00; A[0][1] = A01; A[1][0] = A10; A[1][1] = A11;
    	}
	void power(int A[2][2], int exp)
	{
		// Calculates matrix multiplication using binary exponentiation in time O(logN)
		// A^x=A^(x/2) * A^(x/2), if x is even
		// A^x=A * A^(x/2) * A^(x/2), if x is odd
		int B[2][2] = { {1,1} , {1,0} };
		if(exp == 0 || exp == 1) 
			return;
		power(A, exp/2);
		mul(A, A);
		if(exp%2!=0) 
		mul(A, B);
	}
	int fib(int n)
	{
	// Efficient Solution
	int A[2][2] = { {1,1} , {1,0} };
	if(n == 0) 
       	    return 0;
	power(A, n-1);
	// A[0][0] is the required nth fibonacci number 
	return A[0][0]; 
 	}
};
*/

//Optimal Solution(Binet's Formula)

//Time O(1) & Space O(1)

class Solution {
public:
    int fib(int n) {
    // Optimal Solution
	// The formula is true for all n but works till n=70 in C++ implementation
	// due to approximations in computations & range limits of data types.
	// Double data type ensures high precision and correct answer till n=70
	double z = sqrt(5);
    double t = (pow(2,n)*z);
    double a = (pow(1+z,n));
    double b = (pow(1-z,n));
    cout<<fixed; // Converts scientific notation to fixed-point notation
    cout<<round((a-b)/t); // Rounds off the decimals and replaces them with 0's
    }
};

// All suggestions are welcome. Please upvote if you like it.
