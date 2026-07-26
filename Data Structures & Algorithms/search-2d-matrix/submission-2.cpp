class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0, high = matrix.size() * matrix[0].size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int currRow = mid / matrix[0].size();
            int currCol = mid % matrix[0].size();
            if (matrix[currRow][currCol] == target) {
                return true;
            } else if (matrix[currRow][currCol] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return false;
    }
};
