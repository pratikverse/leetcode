class Solution
{
    public:
        int search(vector<int> &nums, int target)
        {
            int left = 0;
            int right = nums.size() - 1;

            while (left <= right)
            {
                int mid = left + (right - left) / 2;

               	// Check if the middle element is the target
                if (nums[mid] == target)
                {
                    return mid;
                }

               	// Determine which half of the array is sorted
                if (nums[left] <= nums[mid])
                {
                	// Left half is sorted
                    if (target >= nums[left] && target < nums[mid])
                    {
                        right = mid - 1;
                    }
                    else
                    {
                        left = mid + 1;
                    }
                }
                else
                {
                	// Right half is sorted
                    if (target > nums[mid] && target <= nums[right])
                    {
                        left = mid + 1;
                    }
                    else
                    {
                        right = mid - 1;
                    }
                }
            }

            return -1;	// Target not found
        }
};