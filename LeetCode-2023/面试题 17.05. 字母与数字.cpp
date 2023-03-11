class Solution {
public:
    vector<string> findLongestSubarray(vector<string>& array) {
        int n = array.size();
        int s[n + 1];
        s[0] = 0;
        for(int i = 0; i < n; i++) {
            s[i + 1] = s[i] + (array[i][0] >> 6 & 1) * 2 - 1;
        }
        int left = 0, right =0;
        unordered_map<int, int> first;
        for(int i = 0; i < n + 1; i++) {
            auto it = first.find(s[i]);
            if(it == first.end()) {
                first[s[i]] = i;
            } else {
                if(i - it->second > right - left) {
                    left = it->second;
                    right = i;
                }
            }
        }
        return {array.begin() + left, array.begin() + right};
    }
};