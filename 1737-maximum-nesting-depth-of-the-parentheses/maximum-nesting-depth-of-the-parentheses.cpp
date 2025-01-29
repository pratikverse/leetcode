class Solution {
public:
    int maxDepth(string s){
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