/*************************************************************************
	> File Name: EP46.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月16日 星期五 18时56分58秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 100000

int prime[MAX_N + 5] = {0};
int is_prime[MAX_N + 5] = {0};

void init() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!is_prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > MAX_N) break;
            is_prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}
int func(int n) {
    return 2 * n * n;
}

bool binary_search(int (*f)(int), int l, int r, int x) {
    if (l > r) return false;
    int mid = (l + r) >> 1;
    if (f(mid) == x) return true;
    if (f(mid) < x) l = mid + 1;
    else mid = r - 1;
    return binary_search(f, l, r, x);
}

bool is_val(int x) {
    for (int i = 1; i <= prime[0] && prime[i]  < x; i++) {
        int val = x - prime[i];
        if (binary_search(func, 1, val, val)) return true;
    }
    return false;
}

int main() {
    init();
    for (int i = 9; i <= MAX_N; i += 2) {
        if (!is_prime[i]) continue;
        if (is_val(i)) continue;
        cout << i << endl;
        break;
    }
    return 0;
}
