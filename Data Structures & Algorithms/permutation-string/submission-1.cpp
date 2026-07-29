class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> mp;

        for (char ch : s1) {
            mp[ch]++;
        }

        int i = 0, j = 0;

        while (j < s2.length()) {
            if (mp.find(s2[j]) != mp.end()) {
                mp[s2[j]]--;
            }

            if (j - i + 1 > s1.length()) {
                if (mp.find(s2[i]) != mp.end()) {
                    mp[s2[i]]++;
                }
                i++;
            }

            if (j - i + 1 == s1.length()) {
                int count = 0;
                for (auto &it : mp) {
                    if (it.second == 0) {
                        count++;
                    }
                }
                if (count == mp.size()) {
                    return true;
                }
            }
            j++;
        }
        return false;
    }
};
