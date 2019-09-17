/*************************************************************************
	> File Name: EP07-2.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月05日 星期一 16时29分43秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 200000

int prime[MAX_N + 5] = {0};

int main() {
    for (int i = 2; i <=MAX_N; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 2; j * i < MAX_N; j++) {
            if (i * prime[j] > MAX_N) break; // 超界跳出
            prime[i * prime[j]] = 1;         // 标记
            if (i % prime[j] == 0) break;
        }
    }
    printf("%d\n",prime[10001]);
    
    return 0;
}
