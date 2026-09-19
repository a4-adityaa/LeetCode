class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int high =0;
        int low = 1;
        int unique = 1;
        int n = nums.size();

        while(low < n){
            if(nums[low]==nums[low-1]) {
                low++;}
            else{
                nums[unique]=nums[low];
                unique++;
                low++;
            }
        }
        return unique;
    }
};