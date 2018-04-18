﻿给定一个 32 位有符号整数，将整数中的数字进行反转。

示例 1:

输入: 123
输出: 321
 示例 2:

输入: -123
输出: -321
示例 3:

输入: 120
输出: 21


int reverse(int x) {
    long res = 0;
    while(x)
    {
        res = res*10 + x%10;
        x = x/10;
    }
    if(res > INT_MAX || res < INT_MIN)
        return 0;
    return res;
}





