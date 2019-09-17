/*************************************************************************
	> File Name: EP06.c
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年05月19日 星期日 19时35分37秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int sum1 = 0, sum2 = 0;
    sum1 = (1 + 100) * 100 / 2;
    for(int i = 0; i < 100; i++) {
        sum2 += i * i;
    }
    printf("%d\n", sum1 * sum1 - sum2);
    return 0;
}
