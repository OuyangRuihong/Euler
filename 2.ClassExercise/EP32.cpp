/*************************************************************************
	> File Name: EP32.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月09日 星期五 15时36分57秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAX_N 10000

int keep[MAX_N + 5] = {0};

inline int add_to_num(int x, int *num) {
    while (x) {
        if (num[x % 10]) return 0;
        num[x % 10] += 1;
        x /= 10;
    }
    return 1;
}

inline int digits(int x) {
    return floor(log10(x)) + 1;
}

int is_val(int a, int b, int c) {
    if (digits(a) + digits(b) + digits(c) - 9) return 0;
    int num[10] = {0};
    num[0] = 1;
    int flag = 1;
    //flag == 0时,后面的逻辑不执行
    flag = flag && add_to_num(a, num);
    flag = flag && add_to_num(b, num);
    flag = flag && add_to_num(c, num);
    return flag;
}

int main() {
    int sum = 0;
    for (int a = 1; a < 100; a++) {
        for (int b= a + 1; b < 10000; b++) {
            if (!is_val(a, b, a * b)) continue;
            if (keep[a * b]) continue;
            keep[a * b] = 1;
            printf("%d*%d = %d\n", a, b, a * b);
            sum += a * b;
        }
    }
    printf("%d\n", sum);
    return 0;
}
