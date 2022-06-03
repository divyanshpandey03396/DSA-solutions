class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int r = matrix.size();
    int c = matrix[0].size();
    int curr_r = 0;
    int curr_c = c - 1;

    while (curr_r < r and curr_c >= 0)
    {
        if (matrix[curr_r][curr_c] == target)
            return true;
        
        if (matrix[curr_r][curr_c] > target)
            curr_c--;
        else
            curr_r++;
    }
    return false;
    }
};