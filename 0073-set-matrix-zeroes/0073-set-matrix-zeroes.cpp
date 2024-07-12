#define pb push_back
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> v1;
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == 0) {
                    v1.pb({i, j});
                }
            }
        }
        for(int k = 0; k < v1.size(); k++) {
            int row = v1[k].first;
            int col = v1[k].second;

            for(int j = 0; j < m; j++) {
                matrix[row][j] = 0;
            }
            for(int i = 0; i < n; i++) {
                matrix[i][col] = 0;
            }
        }
    }
};
