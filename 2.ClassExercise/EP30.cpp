/*************************************************************************
	> File Name: EP30.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月02日 星期五 16时02分03秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAX_N 354294

int is_val(int x) {
    int tmp = x, sum = 0;
    while (x) {
        sum += (int)pow(x % 10, 5);
         x /= 10;

    }
    return tmp == sum;
}

int main() {
    int sum = 0;
    for (int i = 2; i < MAX_N; i++) {
        if (is_val(i)) sum += i;
    }
    printf("%d\n",sum);
    
    
    return 0;
}
