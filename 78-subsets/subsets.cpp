class Solution {
public:
    void GetallSubset(vector<int>&nums, vector<int>&ans, int i, vector<vector<int>> &allsubset){
        if(i==nums.size()){
            allsubset.push_back({ans});
            return;
        }

        // to include
        ans.push_back(nums[i]);
        GetallSubset(nums, ans, i+1, allsubset);

        ans.pop_back();
        // to exclude
        GetallSubset(nums, ans, i+1, allsubset);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allsubset;
        vector<int> ans;

        GetallSubset(nums, ans, 0, allsubset);
        return allsubset;
    }
};