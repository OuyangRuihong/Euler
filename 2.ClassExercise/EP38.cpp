/*************************************************************************
	> File Name: EP38.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月12日 星期一 14时23分44秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAX_N 10000

int digits(int n) {
    return floor(log10(n)) + 1;
}

int calc(int x) {
    int n = 1;
    int ans = 0;
    while (digits(ans) < 9) {
        ans *= (int)pow(10, digits(x * n));
        ans += x * n;
        n += 1;
    }
    if (digits(ans) - 9) return 0;
    int num[10] = {0};
    num[0] = 1;
    int tmp = ans;
    while (tmp) {
        if (num[tmp % 10]) return 0;
        num[tmp % 10] += 1;
        tmp /= 10;
    }
    return ans;
}

int main() { 
    int ans = 0;
    for (int i = 1; i < MAX_N; i++) { //i = 0 导致死循环
        int tmp = calc(i);
        if (tmp > ans) ans = tmp;
    }
    printf("%d\n", ans);
    return 0;
}
