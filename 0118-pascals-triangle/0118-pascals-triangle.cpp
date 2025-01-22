class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if(numRows == 1) return {{1}};
        if(numRows == 2) return {{1},{1, 1}};

        ans.push_back({1});
        ans.push_back({1, 1});

        // tmp.push_back(1);
        for(int i = 2; i < numRows; i++) {
            vector<int> tmp(i+1, 1);
            for(int j = 1; j < i; j++) {
                tmp[j] = ans[i-1][j-1] + ans[i-1][j];
            }
            ans.push_back(tmp);
        }
        // tmp.push_back(1);
        return ans;
    }
};