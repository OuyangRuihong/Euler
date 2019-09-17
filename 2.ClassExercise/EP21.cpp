/*************************************************************************
	> File Name: EP21.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月19日 星期一 14时04分42秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 10000

int d[MAX_N + 5] = {0};

int main() {
    for (int i = 1; i < MAX_N; i++) {
        for (int j = 2; j * j <= i; j++) {
            if (!(i % j)) d[i] += j + i / j;
        }
    }
    int sum = 0;
    for (int i = 1; i < MAX_N; i++) {
        for (int j = 1; j <= MAX_N; j++) {
            if (i == d[j] && j == d[i]) sum += i;
        } 
    }
    printf("%d\n", sum);
    return 0;
}
