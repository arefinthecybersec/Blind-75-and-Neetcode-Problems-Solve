class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanVal = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
        };

        int sum = 0;
        for(int i = 0; i < s.size(); i++) {
            if(i < s.size()-1 && romanVal[s[i]] < romanVal[s[i+1]]) {
                sum += (romanVal[s[i+1]] - romanVal[s[i]]);
                i++;
            }
            else {
                sum += (romanVal[s[i]]);
                // i++;
            } 
        }
        return sum;
    }
};