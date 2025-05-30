class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    if (intervals.empty()) return {};
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> merged;
    merged.push_back(intervals[0]);
    
    for (int i = 1; i < intervals.size(); i++) {
        // If current interval overlaps with the last merged interval
        if (intervals[i][0] <= merged.back()[1]) {
            // Update the end of the last merged interval if needed
            merged.back()[1] = max(merged.back()[1], intervals[i][1]);
        } else {
            // Add new interval if no overlap
            merged.push_back(intervals[i]);
        }
    }
    
    return merged;
}
};