class Solution {
   public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(piles.begin(), piles.end());
        int low = 1, high = maxi;
        int output;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int ans = 0;

            for (int pile : piles) {
                ans += (pile + mid - 1) / mid;
            }

            if (ans <= h) {
                output = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return output;
    }
};
