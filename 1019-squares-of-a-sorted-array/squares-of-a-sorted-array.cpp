class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        int j = 0, m = 0;
        for (auto &x : a) x = abs(x), m = max(m, x);
        vector <int> c(m + 1, 0);
        for (auto &x : a) c[x]++; 
        for (int i = 0; i <= m; i++) 
            while (c[i]--) 
                a[j++] = i * i;
        return a; 
    }
};