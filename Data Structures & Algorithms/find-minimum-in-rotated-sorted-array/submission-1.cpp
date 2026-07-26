class Solution {
   public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size();
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > nums.back()) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return nums[low];
    }
};
