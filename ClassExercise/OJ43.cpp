/*************************************************************************
	> File Name: OJ43.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年06月25日 星期二 19时30分54秒
 ************************************************************************/

#include<iostream>
using namespace std;

#define MAX_N 1000
int val[MAX_N + 5][MAX_N + 5];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; i++) {
            cin >> val[i][j];
        }
    }

    for (int i = n - 2; i >= 0; --i) {
        for (int j = 0; j <= i; i++) {
            val[i][j] += max(val[i + 1][j + 1], val[i][j + 1]);
        }
    }

    cout << val[0][0] << endl;

    return 0;
}
