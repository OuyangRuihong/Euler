/*************************************************************************
	> File Name: EP47-1.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月16日 星期五 19时52分23秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 1000000

int prime[MAX_N + 5] = {0};

void init() {
    for (int i = 2; i <= MAX_N; i++) {
        if (prime[i]) continue;
        for (int j = i; j<= MAX_N; j += i) {
            prime[j] += 1;
        }
    }
    return ;
}

int main() {
    init();
    for (int i = 1; i <= 100; i++) {
        cout << i << "=" << prime[i] << endl;
    }
    for (int i = 2; i <= MAX_N; i++) {
        int flag = 1;
        for (int k = 0; k < 4 && flag; k++) {
            flag = (prime[i + k] == 4);
        }
        if (flag) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
