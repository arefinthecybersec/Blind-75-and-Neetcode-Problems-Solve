#define pb push_back
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> v1;
        int m = matrix.size();
        int n = matrix[0].size();

        // Collect positions of zeros
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] == 0) {
                    v1.pb({i, j});
                }
            }
        }

        // Set rows and columns to zero
        for(int k = 0; k < v1.size(); k++) {
            int row = v1[k].first;
            int col = v1[k].second;

            // Set entire row to zero
            for(int j = 0; j < n; j++) {
                matrix[row][j] = 0;
            }

            // Set entire column to zero
            for(int i = 0; i < m; i++) {
                matrix[i][col] = 0;
            }
        }
    }
};
