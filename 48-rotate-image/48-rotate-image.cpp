class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        vector<vector<int>> trans;
        
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = i+1; j < matrix[0].size(); j++)
            {
               swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i = 0; i < matrix.size(); i++)
        {
             for(int f = 0, l = matrix[0].size()-1; f < matrix.size()/2; f++,l--)
            {
                    swap(matrix[i][f],matrix[i][l]); 
            }
        }   
    }
};