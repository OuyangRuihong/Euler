/*************************************************************************
	> File Name: EP45-my.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月20日 星期二 15时54分25秒
 ************************************************************************/

#include<stdio.h>

int three(int n) {
    return n * (n + 1) / 2;
}
long long five(long long n) {
    return n * (3 * n - 1) / 2;
}

long long six(long long n) {
    return n * (2 * n - 1);
}

long long binary_search(long long (*func)(long long), long long n, long long x) {
    long long head = 1, tail = n, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (func(mid) == x) return mid;
        else if (func(mid) < x) head = mid + 1;
        else tail = mid - 1;
    }
    return -1;
}

int main() {
    long long n = 144;
    while (binary_search(five, 2 * n, six(n)) == -1) n++;
    printf("%lld\n", n);
    printf("%lld\n", six(n));
    return 0;
}
