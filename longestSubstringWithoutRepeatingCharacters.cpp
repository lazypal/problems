/**
 * @rohit
 */
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;
        int f_ptr = 0, r_ptr = 0;
        int maxLen = INT_MIN;
        while(r_ptr < s.length()) {
            if(set.find(s[r_ptr]) == set.end()) {
                set.insert(s[r_ptr]);
                r_ptr++;
                maxLen = std::max((int)set.size(), maxLen);
            } else {
                set.erase(s[f_ptr]);
                f_ptr++;
            }
        }

        return maxLen == INT_MIN? 0:maxLen;
    }
};