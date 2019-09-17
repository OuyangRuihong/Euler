/*************************************************************************
	> File Name: EP24.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年06月25日 星期二 20时57分07秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 10
int fact[MAX_N + 5];
int num[MAX_N + 5] = {0};

void init(int n) {
    fact[0] = 1;
    num[0] = 1;
    for (int i = 1; i <= n; i++) {
        fact[i] = fact[i - 1] * i;
        num[i] = 1;
    }
    return ;
}

int main() {
    int k = 1000000 - 1;
    for (int i = 1; i <= n; i++) {
        fact[i] = fact[i - 1] * i;
    }


    return 0;
}
