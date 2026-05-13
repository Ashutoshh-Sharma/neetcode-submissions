class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;
        int maxi = 0;
        while(i<j){
            int mini = min(heights[i], heights[j]);
            int area = mini * (j-i);
            maxi = max(maxi,area);
            if(heights[i] < heights[j]) i++;
            else j--;
        }
        return maxi;
    }
};
