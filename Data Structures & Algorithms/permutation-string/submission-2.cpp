class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;

        vector<int> need(26, 0);
        vector<int> window(26, 0);

        for (char ch : s1) {
            need[ch - 'a']++;
        }

        int k = s1.length();

        for (int i = 0; i < k; i++) window[s2[i] - 'a']++;

        if (need == window) return true;

        for (int i = k; i < s2.length(); i++) {
            window[s2[i] - 'a']++;      // add new character
            window[s2[i - k] - 'a']--;  // remove old character

            if (need == window) return true;
        }

        return false;
    }
};