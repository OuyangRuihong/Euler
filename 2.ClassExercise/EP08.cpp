/*************************************************************************
	> File Name: EP08.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月05日 星期一 18时23分09秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>


int main() {
    int64_t p = 1;//累乘变量
    int64_t zero = 0, ans = 0;
    for (int i = 0; num[i]; i++) {
        if (num[i] == '0') {
            zero += 1;
        } else {
            p *= (num[i] - '0');
        }
        if (i >= 13) {
            if (num[i - 13] == '0') {
                zero -= 1;
            } else {
                p /= (num[i - 13] - '0');
            }
        }
        if (zero == 0 && p > ans) ans = p;
    }
    
    printf("%"PRId64"\n", ans);
    return 0;
}


