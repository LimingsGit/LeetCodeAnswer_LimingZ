在二维平面上计算出两个由直线构成的矩形叠加覆盖后的面积。

每个矩形由其左下顶点和右上顶点坐标表示，如图所示。

假设面积不会超出int的范围。

致谢:
特别感谢 @mithmatt 添加本题，提供示例图片以及创建所有测试用例

int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
    int X_Max = C > G ? C:G;
    int X_Min = A < E ? A:E;
    int Y_Max = D > H ? D:H;
    int Y_Min = F < B ? F:B;
    
    int WidthOverArea = (C - A) + (G - E) - (X_Max - X_Min);
    int HeigthOverArea = (D - B) + (H - F) - (Y_Max - Y_Min);
    
    int dup = 0;
    if(C < E || G < A || D < F || H < B)
        dup = 0;
    else
    {
        dup =  WidthOverArea * HeigthOverArea;
    }
    return (C - A)*(D - B) + (G - E)*(H - F) - dup;   
}

