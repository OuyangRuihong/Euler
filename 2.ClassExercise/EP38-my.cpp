/*************************************************************************
	> File Name: EP38-my.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月20日 星期二 14时23分26秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int digits(long long x) {
    return floor(log10(x)) + 1;
}

long long calc(int x) {
    long long ans = 0;
    int n = 1;
    while (digits(ans) < 9) {
        ans *= pow(10, digits(n * x));
        ans += n * x;
        n += 1;
    }
    if (digits(ans) != 9) return -1;
    int num[10] = {0};
    num[0] = 1;
    long long temp = ans;
    while (temp) {
        if (num[temp % 10]) return -1;
        num[temp % 10] += 1;
        temp /= 10;
    }
    return ans;
}

int main() {
    long long temp, ans = 0;
    for (int i = 1; i < 10000; i++) {
        temp = calc(i);
        if (temp > ans) ans = temp;
    }
    printf("%lld\n", ans);
    return 0;
}
