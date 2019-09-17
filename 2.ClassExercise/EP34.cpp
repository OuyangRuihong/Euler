/*************************************************************************
	> File Name: EP34.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月02日 星期五 18时07分58秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 2540160

int num[10];

void init(int *num) {
    num[0]=1;
    for (int i = 1; i < 10; i++) {
        num[i] = num[i - 1] * i;
    }
}


int is_val(int x) {
    int tmp = x, sum = 0;
    while (x) {
        sum += num[x % 10];
        x /= 10;
    }

    return tmp == sum;
}

int main() {
    int sum = 0;
    init(num);
    for (int i = 10; i < MAX_N; i++) {
        if (is_val(i) && i <= MAX_N) {
            printf("%d\n", i);
            sum += i;
        }
    }

    printf("%d\n",sum);
    return 0;
}
