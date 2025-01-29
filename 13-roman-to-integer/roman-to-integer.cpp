class Solution {
public:
    int romanToInt(string s) {
    unordered_map<char, int> map = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    int sum = 0;
    for (int i = 0; i < s.size(); ++i) {
        int current = map[s[i]];
        int next = (i + 1 < s.size()) ? map[s[i + 1]] : 0;
        if (current < next) {
            sum -= current;
        } else {
            sum += current;
        }
    }
    return sum;
}

};