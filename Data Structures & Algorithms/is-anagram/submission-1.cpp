class Solution {
   public:
    bool isAnagram(string s, string t) {
        vector<int> freq(26, 0);
        if (s.size() != t.size()) return false;
        for (auto ch : s) {
            freq[ch - 'a']++;
        }
        for (auto ch : t) {
            freq[ch - 'a']--;
        }
        for (auto it : freq) {
            if (it != 0) {
                return false;
            }
        }
        return true;
    }
};
