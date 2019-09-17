/*************************************************************************
	> File Name: 239.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年06月13日 星期四 20时54分00秒
 ************************************************************************/

#include<iostream>
using namespace std;

int getXY(int n, int s, int &x, int &y) {
    if (n == 0) {
        x = 0, y = 0;
        return ;
    }
    int xx, yy;
    int len_n_1 = (int)pow(2, n - 1);
    int total_n = len_n_1 * len_n_1;
    getXY(n - 1, );

}
