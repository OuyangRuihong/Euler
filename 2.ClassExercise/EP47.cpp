/*************************************************************************
	> File Name: EP47.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月16日 星期五 19时28分32秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 1000000

int prime[MAX_N + 5] = {0};
int is_prime[MAX_N + 5] = {0};
int cnt[MAX_N + 5] = {0};

void init() {
    for (int i = 2; i <= MAX_N; i++) {
        cnt[i] = 1;
    }
    for (int i = 2; i <= MAX_N; i++) {
        if (!is_prime[0]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > MAX_N) break;
            is_prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
            cnt[i * prime[j]] = cnt[i] + 1;
        }
    }
    return ;
}

int main() {
    init();
    for (int i = 0; i <= 100; i++) {
        cout << i << "=" << cnt[i] << endl;
    }
    
    for (int i = 2; i <= MAX_N; i++) {
        int flag = 1;
        for (int k = 0; k < 4 && flag; k++) {
            flag = (cnt[i + k] == 4);
        }
        if (flag) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
