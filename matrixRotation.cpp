/**
 * @rohit
 */ 
class Solution {
public:
    vector<vector<int> > rotateMatrix(vector<vector<int>> &matrix){
        int r = matrix.size(), c = matrix[0].size();
        vector<vector<int>> rotatedMatrix(c, vector<int>(r));
        if(r == c) {
            for(int i = 0; i < r; i++) {
                for(int j = 0; j <= i; j++) {
                    rotatedMatrix[i][j] = matrix[j][i];
                    rotatedMatrix[j][i] = matrix[i][j];
                }
            }
        } else {
            for(int i = 0; i < c; i++) {
                for(int j = 0; j < r; j++) {
                    rotatedMatrix[i][j] = matrix[j][i];
                }
            }
        }
        for(int i = 0; i < c; i++) {
            std::reverse(rotatedMatrix[i].begin(), rotatedMatrix[i].end());
        }
        
        return rotatedMatrix;
    }
}