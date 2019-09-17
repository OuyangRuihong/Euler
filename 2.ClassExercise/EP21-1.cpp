/*************************************************************************
	> File Name: EP21-1.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月19日 星期一 14时56分29秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAX_N 10000

int prime[MAX_N + 5]  = {0};
int f[MAX_N + 5] = {0};
int cnt[MAX_N + 5] = {0};
int fac[MAX_N + 5] = {0};


void init() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            f[i] = 2;
            cnt[i] = 1;
            fac[i] = i + 1;
            //cnt[i] = i * i；//记录q^(ai+1);
            cnt[i] = i;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > MAX_N) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) {
                fac[prime[j] * i] = fac[i] / ( pow(prime[j], cnt[i] + 1) - 1) * (pow(prime[j], cnt[i] + 2) - 1);
                //fac[prime[j] * i] = fac[i] / (cnt[i] * prime[j] - 1) / (cnt[i] - 1);
                //f[prime[j] * i] = f[i] / (cnt[i] + 1) *(cnt[i] + 2);
                //cnt[prime[j] * i] = cnt[i] + 1;
                cnt[prime[j] * i] = cnt[i] * prime[j];
                break;
            } else {
                fac[prime[j] * i] = fac[prime[j]] * fac[i];
                //f[prime[j] * i] = f[prime[j]] * f[i];
                //cnt[prime[j] * i] = 1;
                cnt[prime[j] * i] = prime[j];
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
