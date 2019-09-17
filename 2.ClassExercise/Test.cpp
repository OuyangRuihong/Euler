/*************************************************************************
	> File Name: Test.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月09日 星期五 19时48分36秒
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
#define MAX_N 100
int is_prime[MAX_N + 5];
int prime[MAX_N + 5];

int main() {
    for (int M = 2; M <= MAX_N; M++) {
        if (is_prime[M] == 0) {
            prime[++prime[0]] = M;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * M > MAX_N) break;
            is_prime[prime[j] * M] = 1;
            printf("%d = %d * %d\n", prime[j] * M, prime[j], M);
            if (M % prime[j] == 0) break;
        }
    }
    printf("%d\t%d\t%d\t%d\t%d\n", is_prime[0], is_prime[1], is_prime[2], is_prime[3], is_prime[4]);
    return 0;
}
