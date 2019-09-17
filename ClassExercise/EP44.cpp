/*************************************************************************
	> File Name: EP44.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年06月16日 星期日 15时42分22秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define INF 0x7ffffffffffffffffLL

int Pentagonal(long long n) {
    return n * (3 * n - 1) / 2;
}
/*
int main() {
    int min = 10000000000;
    for (int i = 1; ; i++) {
        for (int j = i - 1;j > 0; j--) {
            
            if (Pentagonal(i) - Pentagonal(j) < min) min = Pentagonal(i) - Pentagonal(j);

        }
    }    
    return 0;
}
*/

int binary_search(long long (*func)(long long), long long n; long long x) {
    int head = 1, tail = n, mid;
    while (head < tail) {
        mid = (head + tail) / 2;
        if (func(mid) == x) return mid;
        if (func(mid) > x) tail = mid - 1;
        else head = mid + 1
    }
    return 1;
} 
int main() {
    long long D = INF;
    long long pk, pj, n = 2;
    while (Pentagonal(pk) - Pentagonal(pj) < D) {
        pk = Pentagonal(n);
        for (int j = n - 1; j >= 1; j--) {
            pj = Pentagonal(j);
            if (pk - pj >= D) break;
            int ind1 = binary_search(Pentagonal, 2 * n, pk + pj);
            int ind2 = binary_search(Pentagonal, n, pk - pj);
            if (ind1 & ind2)
        }
    }

    return 0;
}
