/*************************************************************************
	> File Name: EP04.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月02日 星期五 14时25分07秒
 ************************************************************************/

#include<stdio.h>

int is_val(int x, int base) {
    int tmp = x, sum = 0;
    while (x) {
        sum = sum * base + x % base; // 向前移一位　＋　取最后一位
        x /= base;
    }
    return sum == tmp;
}


int main() {
    int ans = 0;
    for (int a= 100; a < 1000; a++) {
        for (int b = ans / a + 1; b <= a; b++) {
            if (is_val(a * b,10) && ans < a * b) {
                ans = a * b;
                printf("%d*%d=%d\n", a, b,ans);
            }
        }
    }
    
    printf("%d\n",ans);
    return 0;
}
