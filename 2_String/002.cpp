/*
题目描述：
请实现一个函数，将一个字符串中的空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。

输入：
每个输入文件仅包含一组测试样例。 
对于每组测试案例，输入一行代表要处理的字符串。

输出：
对应每个测试案例，出经过处理后的字符串。

样例输入：
We Are Happy

样例输出：
We%20Are%20Happy

*/

//C++版本
class Solution {
public:
    void replaceSpace(char *str,int length) {
        //初始化赋值
        int str_num = 0, blank_number = 0;
        
        //传入参数判读
        if (str == NULL || length < 0)
            return 0;
      
        //统计空格个数和
        while(str[str_num] != '\0')
        {
            if(str[str_num] == ' ')
            {
                blank_number++;
            }
            str_num++;
        }
        
        int tail = str_num  + blank_number*2;  
      
        if(tail >= length || tail == 0)
        {
            return ;
        }
      
        for(int i=tail; i>len && i>=0; i--)
        {
            if(str[str_num] == ' ')
            {
                str[i--] = '0';
                str[i--] = '2';
                str[i] = '%';
            }
            else
            {
                str[i] = str[str_num];
            }
            str_num--;
        }
         
    }
};
