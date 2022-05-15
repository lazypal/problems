/**
 * @rohit
 */
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergedIntervals;
        std::sort(intervals.begin(), intervals.end());

        mergedIntervals.push_back(intervals[0]);
        for(int i = 1; i < intervals.size(); i++) {
            int n = mergedIntervals.size();
            if(mergedIntervals[n-1][1] >= intervals[i][0]) {
                if(mergedIntervals[n-1][1] <= intervals[i][1]) {
                    mergedIntervals[n-1][1] = intervals[i][1];
                }
            } else {
                mergedIntervals.push_back({intervals[i][0], intervals[i][1]});
            }
        }

        return mergedIntervals;
    }
};