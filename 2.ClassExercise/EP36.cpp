/*************************************************************************
	> File Name: EP36.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月02日 星期五 18时53分28秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000000

int is_val(int x, int base) {
    int tmp = x, num = 0;
    while (x) {
        num = num * base + x % base;
        x /= base;
    }
    
    return tmp == num;
}

int main() {
    int sum = 0;
    for (int i = 1; i <= MAX_N; i++) {
        if (is_val(i,10) && is_val(i,2)) {
            printf("%d\n",i);
            sum += i;
        }

    }
    printf("%d\n",sum);
    return 0;
}
