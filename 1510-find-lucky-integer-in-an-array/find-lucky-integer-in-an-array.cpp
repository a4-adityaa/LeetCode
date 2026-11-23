class Solution {
public:
    int findLucky(vector<int>& arr) {
        int arrfreq[502] = {0};
        for (auto const val : arr) {
            arrfreq[val]++;
        }   
        for (int i = 500; i >= 1; i--) {
            if (i == arrfreq[i])
                return i;
        }  
        return -1;
    }
};