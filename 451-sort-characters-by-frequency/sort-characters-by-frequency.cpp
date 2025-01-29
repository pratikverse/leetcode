class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> ump;
        multimap<int,char> mp;
        string ss = "";
        for(int c:s){
            ump[c]++;
        }
        for(auto it:ump){
            mp.insert({it.second,it.first});
        }
        for(auto it=mp.rbegin(); it!=mp.rend(); ++it){
            ss.append(it->first,it->second);
        }
        return ss;
    }
};