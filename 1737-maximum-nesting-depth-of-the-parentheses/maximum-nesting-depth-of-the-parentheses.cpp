class Solution {
public:
    int maxDepth(string s){
    stack<int> s1;
    string newS;
    int maxCount = 0;
    int count = 0;
    for (char c:s){
        if(c=='('){
            maxCount++;
        }
        else if(c==')'){
            maxCount--;
        }
        count = max(maxCount,count);
    }
    
    return count;
}
};