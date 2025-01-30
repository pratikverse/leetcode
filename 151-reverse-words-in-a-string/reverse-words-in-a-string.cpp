class Solution {
public:
    string reverseWords(string s) {
    string ans = "";
    for(int i = s.size()-1; i >= 0; i--) {
        if(s[s.size()-1]== ' '){
            s.pop_back();
        }
        if(s[0]==' '){
            s.erase(0,1);
        }
        if(s[i] == ' ') {
            ans += s.substr(i+1, s.size()-1) + " ";
            s = s.substr(0, i);
        }
        if(i==0){
            ans = ans+ s.substr(i,s.size());
        }
    }
    return ans;
}
};