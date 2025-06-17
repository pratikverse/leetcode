class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
    int n = cardPoints.size();
    // First take first k cards
    int currSum = 0;
    for(int i = 0; i < k; i++) {
        currSum += cardPoints[i];
    }
    
    // Initialize maxSum with current sum
    int maxSum = currSum;
    
    // Try all combinations by removing one from front 
    // and adding one from back
    for(int i = k-1; i >= 0; i--) {
        currSum -= cardPoints[i];  // remove from front
        currSum += cardPoints[n-k+i];  // add from back
        maxSum = max(maxSum, currSum);
    }
    
    return maxSum;
}
};