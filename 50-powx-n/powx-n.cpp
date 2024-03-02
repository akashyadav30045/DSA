class Solution {
public:
    double myPow(double x, int n) {
        // Base case: If the exponent is 0, return 1
        if (n == 0) {
            return 1;
        }
        
        // Recursive cases:
        // If the exponent is negative, convert it to positive and take the reciprocal of the result
        if (n < 0) {
            return 1 / (x * myPow(x, -(n + 1)));
        }
        
        // If the exponent is even, divide it by 2 and square the result
        if (n % 2 == 0) {
            double halfPow = myPow(x, n / 2);
            return halfPow * halfPow;
        }
        
        // If the exponent is odd, subtract 1 from it and multiply the result by x
        return x * myPow(x, n - 1);
    }
};
