给定一个非负整数 c ，你要判断是否存在两个整数 a 和 b，使得 a2 + b2 = c。

示例1:

输入: 5
输出: True
解释: 1 * 1 + 2 * 2 = 5
 

示例2:

输入: 3
输出: False

#include <math.h>
bool judgeSquareSum(int c) {
    for(int i = sqrt(c);i >= 0;i--)
    {
        if(i * i == c)
            return true;
        int d = c - i * i;
        int t = sqrt(d);
        if(t * t == d)
            return true;
    }
    return false;
}