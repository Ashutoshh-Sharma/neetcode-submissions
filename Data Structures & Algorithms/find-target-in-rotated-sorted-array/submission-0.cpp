class Solution {
   public:
    int binarySearch(vector<int>& nums, int low, int high, int target) {
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > nums[high]) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        if (target >= nums[low] && target <= nums.back()) {
            return binarySearch(nums, low, nums.size() - 1, target);
        } else {
            return binarySearch(nums, 0, low - 1, target);
        }
        return -1;
    }
};
