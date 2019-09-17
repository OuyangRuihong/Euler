/*************************************************************************
	> File Name: EP37.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月09日 星期五 18时47分01秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAX_N 1000000

int prime[MAX_N + 5] = {0};
int is_prime[MAX_N + 5] = {0};

void init() {
    is_prime[0] = 1;
    is_prime[1] = 1;
    for (int i = 2; i <= MAX_N; i++) {
        if (!is_prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > MAX_N) break;
            is_prime[i * prime[j]] = 1;
            if (i * prime[j] == 0) break;
        }
    }
    return ;
}

int is_val(int x) {
    int tmp = x, digit = floor(log10(x)) + 1;
    int h;
    while(tmp) {
        if (is_prime[tmp]) return 0;
        tmp /= 10;
    }
    while(digit) {
        h = (int)pow(10,digit - 1);
        if (is_prime[x % h]) return 0;
        --digit;
    }
    return 1;
}

int main() {
    int sum = 0, cnt = 0;
    init();

    for (int i = 1; i <= prime[0]; i++) {
        if (prime[i] <= 10) continue;
        if (is_val(prime[i])) {
            printf("%d\n", prime[i]);
            sum += prime[i];
            ++cnt;
        }
        if (cnt == 11) break;
    }
    printf("%d\n", sum);
    printf("%d\n", cnt);

    return 0;
}
