����һ���Ǹ����� c ����Ҫ�ж��Ƿ������������ a �� b��ʹ�� a2 + b2 = c��

ʾ��1:

����: 5
���: True
����: 1 * 1 + 2 * 2 = 5
 

ʾ��2:

����: 3
���: False

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