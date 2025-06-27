class Solution {
public:
    vector<int> majorityElement(vector<int> &nums)
{
    vector<int> result;
    unordered_map<int, int> countMap;
    int size = nums.size();
    if (!size)
        return {};
    for (int i = 0; i < size; i++)
    {
        countMap[nums[i]]++;
    }
    auto it = countMap.begin();
    // {{3,2},{2,1}} countMap
    for (int i = 0; i < countMap.size(); i++)
    {
        if (it->second > size / 3)
            result.push_back(it->first);
        ++it;
    }
    return result;
}
};