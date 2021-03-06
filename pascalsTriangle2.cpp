/**
 * @rohit
 * */
class Solution {
public:
    vector<int> getRow(int numRows) {
        if(numRows == 0) return {1};
        vector<int> currRows;
        for(int i = 0; i <= numRows; i++) {
            currRows.push_back(1);
            for(int j = currRows.size() - 2; j > 0; j--) {
                currRows[j] += currRows[j-1];
            }
        }
        return currRows;
    }
};