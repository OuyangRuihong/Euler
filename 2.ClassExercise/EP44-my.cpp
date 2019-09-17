/*************************************************************************
	> File Name: EP44-my.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月20日 星期二 15时30分18秒
 ************************************************************************/

#include<stdio.h>
#define INF 0x7ffffffffffffffll

long long Pentagonal(long long n) {
    return n * (n * 3 - 1) / 2;
}

int baniry_search(long long (*fun)(long long), long long n, long long x) {
    long long head = 1, tail = n, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (fun(mid) == x) return mid;
        if (fun(mid) < x) head = mid + 1;
        else tail = mid - 1;
    }
    return 0;
}

int main() {
    long long D = INF;
    long long pk, pj, n = 2;
    while (Pentagonal(n) - Pentagonal(n - 1) < D) {
        pk = Pentagonal(n);
        for (int j = n - 1; j >= 1; j--) {
            pj = Pentagonal(j);
            if (pk - pj >= D) break;
            int ind1 = baniry_search(Pentagonal, 2 * n, pk + pj);
            int ind2 = baniry_search(Pentagonal, n, pk - pj);
            if (ind1 && ind2) {
                D = pk - pj;
            }
        }
        n++;
    }
    printf("%lld\n", D);
    return 0;
}
