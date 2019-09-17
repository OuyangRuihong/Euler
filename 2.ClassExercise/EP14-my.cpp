/*************************************************************************
	> File Name: EP14-2.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月07日 星期三 15时10分24秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000000


int mem[MAX_N + 5] = {0};

int get_len(long long x) {
    if (x == 1) return 1;
    if (x <= MAX_N && mem[x]) return mem[x];
    int ret;
    if (x & 1) ret = get_len(3 * x + 1) + 1;
    else ret = get_len(x >> 1) + 1;
    if (x <= MAX_N) mem[x] = ret;
    return ret;
}

int main() {
    long long ans = 0, num = 0;
    for (long long i = 1; i < MAX_N; i++) {
        int l = get_len(i);
        if (l > ans) ans = l, num = i;
    }
   printf("%lld\n", num); 
    
    return 0;
}

