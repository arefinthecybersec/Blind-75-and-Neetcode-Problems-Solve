#define pb push_back
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        // if (numRows == 0) return v;

        v.pb({1});
        if (numRows == 1) return v;

        for (int i = 1; i < numRows; i++) {
            vector<int> row;
            row.pb(1);
            for (int j = 1; j < i; j++) {
                row.pb(v[i-1][j-1] + v[i-1][j]);
            }
            row.pb(1);
            v.pb(row);
        }

        return v;
    }
};
