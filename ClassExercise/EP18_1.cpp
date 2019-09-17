/*************************************************************************
	> File Name: EP18.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年06月25日 星期二 18时42分20秒
 ************************************************************************/

#include<iostream>
using namespace std;

#define MAX_N 15

int val[MAX_N + 5][MAX_N + 5];
int keep_val[MAX_N + 5][MAX_N + 5] = {0};

int dfs(int i, int j, int n) {
    if (i + 1 == n) return val[i][j];
    if (keep_val[i][j] != 0) return keep_val[i][j];
    int val_1 = dfs(i, j + 1, n);
    int val_2 = dfs(i + 1, j + 1, n);
    return keep_val[i][j] = (val_1 > val_2 ? val_1 : val_2) + val[i][j];
}

int main() {
    for (int i = 0; i < MAX_N; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> val[i][j];
        }
    }

    cout << dfs(0, 0, MAX_N) << endl;
    return 0;
}
