/*************************************************************************
	> File Name: EP10.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月05日 星期一 19时05分38秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 2000000

int prime[MAX_N + 5] = {0};

int main() {
    long long ans = 0;
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) {
            ans += i;
            prime[++prime[i]] = i;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > MAX_N) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
        
    }

    printf("%lld\n", ans);
    return 0;
}
