/**
 * @rohit
 * */
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 0) return {{}};
        vector<vector<int>> pascalsTriangle;
        vector<int> currRows;
        for(int i = 0; i < numRows; i++) {
            currRows.push_back(1);
            for(int j = currRows.size() - 2; j > 0 ; j--) {
                currRows[j] += currRows[j-1];
            }
            pascalsTriangle.push_back(currRows);
        }
        return pascalsTriangle;
    }
};