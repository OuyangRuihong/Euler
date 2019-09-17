/*************************************************************************
	> File Name: EP20.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月14日 星期三 16时40分17秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 158

int num[MAX_N + 5] = {0};

int main() {
    num[0] = num[1] = 1;
    for (int i = 2; i <= 100; i++) {
        for (int j = 1; j <= num[0]; j++) num[j] *= i;
        for (int k = 1; k <= num[0]; k++) {
            if (num[k] < 10) continue;
            num[k + 1] += num[k] / 10;
            num[k] %= 10;
            num[0] += (num[0] == k);
        }
    }
    int sum = 0;
    for (int i = num[0]; i > 0; i--) {
        sum += num[i];
    }
    printf("%d\n", sum);

    return 0;
}

