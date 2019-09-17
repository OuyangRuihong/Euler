/*************************************************************************
	> File Name: EP35.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月09日 星期五 18时01分49秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAX_N 1000000

int prime[MAX_N + 5] = {0};
int is_prime[MAX_N + 5] = {0};

void init() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!is_prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > MAX_N) break;
            is_prime[prime[j] * i] = 1;
            //printf("%d = %d * %d\n", prime[j] * i, prime[j], i);
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int is_val(int x) {
    int digit = floor(log10(x)) + 1;
    int tmp = x, h = (int)pow(10, digit - 1);
    for (int i = 0; i < digit; i++) {
        tmp = (tmp / 10) + h * (tmp % 10);
        if (is_prime[tmp]) return 0;
    }
    return 1;
}

int main() {
    init();
    int sum = 0;
    for (int i = 1; i <= prime[0]; i++) {
        if (is_val(prime[i])) sum += 1, printf("%d\n", prime[i]);
        
    }
    printf("%d\n", sum);
    return 0;
}
