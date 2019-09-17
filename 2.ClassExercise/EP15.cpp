/*************************************************************************
	> File Name: EP15.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月14日 星期三 16时03分47秒
 ************************************************************************/

#include<stdio.h>

int main() {
    long long n = 40, m = 20, ans = 1;
    while (n > 20 || m > 1) {
        if (n > 20) ans *= (n--);
        if (m && ans % m == 0) ans /= (m--);
    }
    printf("%lld\n", ans);
    

    return 0;
}
