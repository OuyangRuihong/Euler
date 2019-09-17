/*************************************************************************
	> File Name: EP31.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月09日 星期五 14时14分16秒
 ************************************************************************/

#include<stdio.h>
#define MAX_M 8
#define MAX_N 200

int w[MAX_M + 5] = {1, 2, 5, 10, 20, 50, 100, 200};
//f(i, j) = f(i - 1, j) + f(i, j - w[i - 1])

int f[MAX_M + 5][MAX_N + 5];

int main() {
    for (int i = 0; i < MAX_M; i++) {
        f[i][0] = 1;
        for (int j = 0; j <= MAX_N; j++) {
            f[i][j] = 0;
            if (i - 1 >= 0) f[i][j] = f[i - 1][j];
            if (j - w[i] >= 0) f[i][j] += f[i][j - w[i]];
        }
    }
    printf("%d\n", f[MAX_M - 1][MAX_N]);
    return 0;
}
