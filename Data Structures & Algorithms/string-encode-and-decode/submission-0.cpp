class Solution {
   public:
    string encode(vector<string>& strs) {
        string s = "";
        for (string str : strs) {
            int len = str.length();
            string prefix = to_string(len) + "#";
            s += prefix + str;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while (i < s.length()) {
            string number = "";
            while (s[i] != '#') {
                number += s[i];
                i++;
            }
            int len = stoi(number);
            i++;
            string word = s.substr(i, len);
            ans.push_back(word);
            i += len;
        }
        return ans;
    }
};
