/*************************************************************************
	> File Name: EP05.c
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年06月11日 星期二 20时17分43秒
 ************************************************************************/

#include<stdio.h>

typedef long long lint;

lint gcd(lint a, lint b) {
    if(b == 0) return a;
    return gcd (b, a % b); // return (b ? gcd(b, a % b));
}

lint ex_gcd(lint a, lint b, int)

int main() {
    lint ans = 1;
    for (int i = 2; i <= 20; i++) {
        ans = ans * i / gcd(ans, i);
    }

    printf("%ll\n", ans);
}
