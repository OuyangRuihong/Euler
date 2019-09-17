/*************************************************************************
	> File Name: EP26.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月16日 星期五 15时48分29秒
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;
#define MAX_N 1000

int keep[MAX_N + 5];

int get_len(int x) {
    memset(keep, 0, sizeof(keep));
    int r = 1, t = 1; //r余数，t当前时间节点
    keep[1] = 1;
    while (r) {
        r *= 10;
        r %= x;
        t += 1;
        if (keep[r]) return t - keep[r];
        keep[r] = t;
    }
    return 0;
}

int main() {
    int d = 0, len = 0;
    for (int i = 1; i < MAX_N; i++) {
        int temp = get_len(i);
        if (temp > len) len = temp, d = i;
    }
    cout << d << " " << len << endl;
    return 0;
}
