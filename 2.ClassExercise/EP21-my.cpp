/*************************************************************************
	> File Name: EP21-my.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月19日 星期一 16时44分08秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAX_N 10000

int prime[MAX_N + 5] = {0};
int cnt[MAX_N + 5] = {0};
int fac[MAX_N + 5] = {0};

void init() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            cnt[i] = 1;
            fac[i] = i + 1;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > MAX_N) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) {
                cnt[i * prime[j]] = cnt[i] + 1;
                fac[i * prime[j]] = fac[i] / (pow(prime[j], cnt[i] + 1) - 1) * (pow(prime[j], cnt[i] + 2) - 1);
                break;
            } else {
                cnt[i * prime[j]] = 1;
                fac[i * prime[j]] = fac[i] * fac[prime[j]];
            }
        }
    }
    return ;
}

int main() {
    init();
    int sum = 0;
    for (int i = 2; i < MAX_N; i++) {
        fac[i] -= i;
    }
    for (int i = 2; i < MAX_N; i++) {
        if (fac[i] < MAX_N && fac[i] != i && fac[fac[i]] == i) sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
