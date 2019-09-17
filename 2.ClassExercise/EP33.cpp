/*************************************************************************
	> File Name: EP33.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月09日 星期五 16时40分00秒
 ************************************************************************/

#include<stdio.h>

void digits(int x, int *num) {
    num[0] = x / 10;
    num[1] = x % 10;
    return ;
}

int is_val(int a, int b) {
    int numa[2] = {0};
    int numb[2] = {0};
    digits(a, numa);
    digits(b, numb);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (numa[i] != 0 && numa[i] == numb[j]) return a * numb[j ^ 1] == b * numa[i ^ 1];
        }
    }
    return 0;
}


int main() {
    for (int i = 10; i < 100; i++) {
        for (int j = i + 1; j < 100; j++) {
            if (is_val(i, j)) printf("%d / %d\n", i, j);
        }
    }

    return 0;
}
