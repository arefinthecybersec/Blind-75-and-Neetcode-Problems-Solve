class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        if(arr.size() == 1) {
            return {arr.back() = -1};
        }

        for(int i = 0; i < arr.size()-1; i++) {
            int mx = INT_MIN;
            for(int j = i+1; j < arr.size(); j++) {
                mx = max(mx, arr[j]);
            }
            arr[i] = mx;
            mx = INT_MIN;
        }
        arr.back() = -1;
        return arr;
    }
};