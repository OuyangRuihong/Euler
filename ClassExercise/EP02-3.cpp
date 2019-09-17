/*************************************************************************
	> File Name: EP02-3.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年06月16日 星期日 14时00分44秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
#define MAX_N 4000000

int main() {
    long long sum = 0;
    int f[3] = {0,1};
    int n = 1;
    while (f[n % 3] + f[(n - 1) %3] < MAX_N) {
        n++;
        f[n % 3] =f[(n - 1) % 3] + f[(n - 2) % 3];
        if (!(f[n % 3] & 1)) sum += f[n % 3];
    }

    cout << sum << endl;
    return 0;
}
