/*************************************************************************
	> File Name: EP14.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月07日 星期三 14时53分47秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000000

long long get_len(long long x) {
    if (x == 1) return 1;
    if (x & 1) return get_len(3 * x + 1) + 1;
    return get_len(x >> 1) + 1;
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
