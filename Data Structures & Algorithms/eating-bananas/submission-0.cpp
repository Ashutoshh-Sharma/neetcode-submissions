class Solution {
   public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int k;
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;
        while (low <= high) {
            int sum = 0;
            k = low + (high - low) / 2;
            for (int i = 0; i < piles.size(); i++) {
                sum += (piles[i] + k - 1) / k;
            }
            if (sum > h) {
                low = k + 1;
            }
            else{
                high = k - 1;
                ans = k;
            }
        }
        return ans;
    }
};
