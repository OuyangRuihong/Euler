/*************************************************************************
	> File Name: prime_test1.c
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月05日 星期一 16时02分36秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define MAX_N 10000

int prime[MAX_N + 5];

int main() {
    memset(prime, 0, sizeof(prime));
    
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            for (int j = 2; j * i < MAX_N; j++) {
                

            }
        } 
        
    }
    
    
    return 0;
}

