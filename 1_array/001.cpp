class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int row = (int)array.size();
        int col = (int)array[0].size();
        if (row == 0 || col == 0)
            return false;
        if (target < array[0][0] || target > array[row - 1][col - 1])
            return false;
        int i = 0;
        int j = col - 1;
        while(i < row && j >= 0)
        {
            if (array[i][j] > target)
            {
                j--;
            }
            else if(array[i][j] < target)
            {
                i++;
            }
            else
            {
                return 1;
            }
        }
    return 0;
    }
};
 
 
    
