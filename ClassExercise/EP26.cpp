/*************************************************************************
	> File Name: EP26.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年06月27日 星期四 18时51分53秒
 ************************************************************************/

#include<iostream>
using namespace std;
int r_len[MAX_N + 5];

int get_length(int d) {
    int r = 1, t = 1;
    memset(r_len, 0, sizeof(r_len));
    r_len[1] = 1;
    while (r) {
        r = r * 10 % y;
        t += 1;
        if (r_len[r]) return t - r_len
    }
    return 0;
}
