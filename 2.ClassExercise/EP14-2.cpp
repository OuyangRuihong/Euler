/*************************************************************************
	> File Name: EP14.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月07日 星期三 14时53分47秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000000
#define keep_max_len 1000000

//记忆化数组不是越大越好;

int keep[keep_max_len + 5] = {0};

long long get_len(long long x) {
    if (x == 1) return 1;
    if (x < keep_max_len && keep[x]) return keep[x];
    if (x < 0){
        printf("error\n");
    }
    int ret;
    if (x & 1) ret = get_len(3 * x + 1) + 1;
    else ret = get_len(x >> 1) + 1;
    if (x < keep_max_len) keep[x] = ret;
    return ret;
}

int main() {
    long long ans = 0, num = 0;
    for (long long i = 1; i < MAX_N; i++) {
        int l = get_len(i);
        if (l >= ans) ans = l, num = i;
    }
    printf("%lld\n", num); 
    return 0;
}
