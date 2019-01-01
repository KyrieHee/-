class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int row = (int)array.size();
        int col = (int)array[0].size();
        //判断数组是否含有元素
        if (row == 0 || col == 0)
            return false;
        //判断下标是否越界
        if (target < array[0][0] || target > array[row - 1][col - 1])
            return false;
        
        
        int i = 0;
        int j = col - 1;
        //在数组范围内查找
        while(i < row && j >= 0)
        {
            if (target < array[i][j])
            {
                j--; //查找的元素较少，往上找
            }
            else if(target > array[i][j])
            {
                i++; //查找的元素较大，往右找
            }
            else
            {
                return 1; //找到元素
            }
        }
        return 0;
    }
};
 
 
    
