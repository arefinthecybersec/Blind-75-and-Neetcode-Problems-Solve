class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        sort(citations.rbegin(), citations.rend());

        if(citations[0] == 0) {
            return 0;
        }

        int h_idx = 1;
        for(int i = 1; i < n; i++) {
            if(citations[i] > h_idx) {
                h_idx++;
            }
        }
        return h_idx;
    }
};