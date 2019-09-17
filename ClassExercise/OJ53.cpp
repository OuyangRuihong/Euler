/*************************************************************************
	> File Name: OJ53.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年06月27日 星期四 19时13分15秒
 ************************************************************************/

#include<iostream>
using namespace std;

#define MAX_N 100000
int prime[MAX_N + 5];
int dnum[MAX_N + 5];
int mnum[MAX_N + 5];

int main() {
    dnum[1] = 1;
    for (int i = 2; i <= prime[0]; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            dnum[i] = i + 1;
            mnum[i] = i;
        }
    
        for (int j =1; j <= prime[0]; j++) {
            if (prime[j] * i > MAX_N) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j]) {
                dnum[i * prime[j]] = dnum[i] * dnum[prime[j]];
                mnum[i * prime[j]] = prime[j];
            } else {
                mnum[i * prime[j]] = mnum[i] * prime[j];
                int min_prime = mnum[i * prime[j]], rest = i * prime[j] / min_prime;
                dnum[i * prime[j]] = dnum[min_prime] * dnum[rest];
                if (rest == 1) dnum[i * prime[j]] = (min_prime * prime[j] - 1) / (prime[j] - 1);
                break;
            }
        }
    }
    long long ans = 0;


    return 0;
}
