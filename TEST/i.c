/*************************************************************************
	> File Name: i.c
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年07月02日 星期二 20时05分16秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main() {
    int a[3];
    scanf("%d %d %d", a, a + 1, a + 2);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (a[j] > a[j + 1]) swap(a[j], a[j + 1]);
        }
    }

    if ((a[0] + a[1]) < a[2]) {
        if ((a[0] * a[0] + a[1] * a[1]) > a[2] * a[2]) printf("acute triangle");
        if ((a[0] * a[0] + a[1] * a[1]) == a[2] * a[2]) printf("right triangle");
        if ((a[0] * a[0] + a[1] * a[1]) < a[2] * a[2]) printf("obtuse triangle");
    } else {
        printf("illegal triangle");
    }
    return 0;
}
