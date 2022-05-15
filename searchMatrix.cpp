/**
 * @rohit
 */
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int key) {
        int r = matrix.size(), c = matrix[0].size();
        int i = 0, j = c-1;
        while(i < r && j >= 0) {
            if(matrix[i][j] == key) return true;

            else if(matrix[i][j] < key) i++;

            else j--;
        }

        return false;
    }
};