/*************************************************************************
	> File Name: EP45.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月12日 星期一 18时38分34秒
 ************************************************************************/

#include<stdio.h>
typedef long long intl;

intl pentagonal(intl n) {
    return n * (3 * n - 1) / 2;
}

intl hexagonal(intl n) {
    return n * (2 * n - 1);
}

int binary_search(int n, intl x) {
    int head = 1, tail = n, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (pentagonal(mid) == x) return 1;
        else if (pentagonal(mid) < x) head = mid + 1;
        else tail = mid - 1;
    }
    return -1;
}

int main() {
    intl n =144;
    while (binary_search(2 * n, hexagonal(n)) == -1) n++;
    printf("%lld\n", n);
    printf("%lld\n", hexagonal(n));

    return 0;
}
