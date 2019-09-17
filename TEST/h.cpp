/*************************************************************************
	> File Name: h.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年07月02日 星期二 18时59分37秒
 ************************************************************************/

#include<iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    int prime[n] = {0};
    prime[0] = 1, prime[1] = 1;
    for (int i = 2; i <= n; i++) {
        if (prime[i] == 1) continue;
        for (int j = 2 * i; j <= n; j += i) {
            if (prime[j] == 1) continue;
            prime[j] = 1;
        } 
    }
    
    for (int i = 0; i <= n; i++) {
        if (prime[i] == 0) cout << i << " ";
        if (i == n && prime[i] == 0) cout << i;
    }
    cout << endl;
    return 0;
}
