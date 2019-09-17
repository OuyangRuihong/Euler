/*************************************************************************
	> File Name: EP29.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年06月27日 星期四 20时22分50秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 100
int f[MAX_N + 5][MAX_N + 5];

int main() {
    for (int i = 2; i <= MAX_N; i++){
        for (int j = 2; j <= MAX_N; j++){
            if (f[i][j]) continue;
            for (int k = 2; k * K <= j; k++) {
                if (j % k)
            }
        }
    }
    return 0;
}
