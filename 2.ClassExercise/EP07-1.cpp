/*************************************************************************
	> File Name: EP07.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月05日 星期一 15时14分12秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define MAX_N 200000

int prime[MAX_N + 5];

int main() {
    memset(prime, 0, sizeof(prime));
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) {
            //prime[++prime[0]] = i;
            prime[0] += 1;
            prime[prime[0]] = i;
            for (int j = 2; j * i <=MAX_N; j++) {
                prime[j * i] = 1;
            }
        }
        
    }

    printf("%d\n",prime[10001]);
    
    return 0;
}
