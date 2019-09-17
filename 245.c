/*************************************************************************
	> File Name: 245.c
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年06月11日 星期二 18时09分50秒
 ************************************************************************/

#include<stdio.h>

#define MAX_N 100000
int arr[MAX_N + 5];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", arr + i);
    nth_element(arr, arr + n / 2, arr + n);
    int pos = arr[n / 2], ans = 0;
    for (int i = 0; i < n; i++) {
        ans += abs(arr[i] - pos);
    }
    printf("%d\n", ans);
    return 0;
}
