class Solution {
   public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> mp;

        int maxFreq = 0;
        int countMax = 0;
        int totalTasks = tasks.size();

        for (char task : tasks) {
            mp[task]++;
            maxFreq = max(maxFreq, mp[task]);
        }

        for (auto it : mp) {
            if (it.second == maxFreq) countMax++;
        }

        return max(totalTasks, (maxFreq - 1) * (n + 1) + countMax);
    }
};
