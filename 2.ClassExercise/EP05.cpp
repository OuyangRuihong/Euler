/*************************************************************************
	> File Name: EP05.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月05日 星期一 14时58分45秒
 ************************************************************************/

#include<stdio.h>


int gcd(int a, int b) {
   // if (!b) return a;
    //return gcd(b, a % b);
    return b ? gcd(b, a % b) : a ;
}


int main() {
    int ans = 1;
    for (int i = 1; i<= 20; i++) {
        if (ans % i == 0) continue;
        ans = ans * i / gcd(ans, i);
    }
    printf("%d\n", ans);

    return 0;
}


