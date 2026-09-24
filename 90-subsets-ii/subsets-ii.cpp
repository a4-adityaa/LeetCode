class Solution {
public:
    void getSubset(vector<int> &nums, vector<int>&ans, int i, vector<vector<int>>& allSubset){
        if(i== nums.size()){
            allSubset.push_back(ans);
            return;
        };
        // include
        ans.push_back(nums[i]);
        getSubset(nums, ans, i+1, allSubset);

        ans.pop_back();

        int index = i+1;
        while(index < nums.size() && nums[index]== nums[index-1]) index++;

        // exclude
        getSubset(nums, ans, index, allSubset);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> allSubset;
        vector<int> ans;

        getSubset(nums, ans, 0, allSubset);

        return allSubset;
    }
};