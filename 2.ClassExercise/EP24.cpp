/*************************************************************************
	> File Name: EP24.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月16日 星期五 14时13分19秒
 ************************************************************************/

#include<stdio.h>

#define MAX_N 10

int jump_num[MAX_N + 5] = {0};
int dnum[MAX_N + 5] = {0};

void init() {
    jump_num[0] = 1, dnum[0] = 1;
    for (int i = 1; i < MAX_N; i++) {
        jump_num[i] = i * jump_num[i - 1];
        dnum[i] = 1;
    }
    return ;
}

int get_num(int n, int k) {
    int ind = (k / jump_num[n]) + 1, i = -1;
    while (ind > 0) {
        i++;
        ind -= dnum[i];
    }
    dnum[i] = 0;
    return i;
}

int main() {
    int n, k;
    init();
    scanf("%d%d", &n, &k);
    k -= 1;
    for (int i = n - 1; i >= 0; i--) {
        int num = get_num(i, k);
        printf("%d", num);
        k %= jump_num[i];
    }
    printf("\n");
    return 0;
}
