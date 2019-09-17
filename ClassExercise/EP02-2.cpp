/*************************************************************************
	> File Name: EP02-2.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年06月16日 星期日 13时44分30秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
#define MAX_N 4000000

int main() {
    long long sum = 2;
    int a = 1, b = 2;
    while (sum < MAX_N) {
        b = a + b;
        a = b - a;
        if (!(b & 1)) sum += b;

    }
    cout << sum << endl;
    printf("%lld\n", sum);

    return 0;
}
