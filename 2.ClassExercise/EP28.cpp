/*************************************************************************
	> File Name: EP28.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月02日 星期五 15时30分28秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int sum = 1;
    for (int l = 3; l <= 1001; l+=2) {
        sum += 4 * l * l - 6 * l + 6;

    }
    printf("%d", sum);
    
    return 0;
}



