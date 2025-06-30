class Solution
{
    public:
        int findPeakElement(std::vector<int> &nums)
        {
            int low = 0;
            int high = nums.size() - 1;

            while (low < high)
            {
                int mid = low + (high - low) / 2;

                if (nums[mid] < nums[mid + 1])
                {
                   	// You're on an ascending slope → peak is to the right
                    low = mid + 1;
                }
                else
                {
                   	// You're on a descending slope or at peak → move left
                    high = mid;
                }
            }

           	// low == high → guaranteed to be at a peak
            return low;
        }
};