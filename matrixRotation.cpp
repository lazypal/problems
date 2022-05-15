/**
 * @rohit
 */ 
class Solution {
public:
    vector<vector<int> > rotateMatrix(vector<vector<int>> &matrix){
        int r = matrix.size(), c = matrix[0].size();
        vector<vector<int>> rotatedMatrix(c, vector<int>(r));

        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                rotatedMatrix[j][i] = matrix[i][j];
            }
        }

        for(int i = 0; i < c; i++) {
            std::reverse(rotatedMatrix[i].begin(), rotatedMatrix[i].end());
        }
        
        return rotatedMatrix;
    }
}