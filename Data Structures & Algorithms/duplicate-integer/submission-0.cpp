class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int it:nums){
            if(s.count(it)){
                return true;
            }
            else{
                s.insert(it);
            }
        }
        return false;
    }
};