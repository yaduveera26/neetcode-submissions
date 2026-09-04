class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int>m;
        for(auto it:nums){
            if(m.find(it)!=m.end()) return true;
            m[it]=1;
        }
        return false;
    }
};