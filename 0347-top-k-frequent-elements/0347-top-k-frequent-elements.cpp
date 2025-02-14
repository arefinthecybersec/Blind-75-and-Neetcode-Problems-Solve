class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> map;
        for(int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
        }

        priority_queue<pair<int, int>> pq;
        for(auto u: map) {
            pq.push({u.second, u.first});
        }

        vector<int> result;
        int cnt = 0;
        while(!pq.empty()) {
            if(cnt == k) break;
            cnt++;
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};