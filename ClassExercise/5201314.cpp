/*************************************************************************
	> File Name: 5201314.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月10日 星期六 17时03分29秒
 ************************************************************************/

#include<stdio.h>

void base_func(int base) {
	int love = 5201314;
	printf("5201314的%d进制数是：", base);
	if (base <= 10) {
		while (love) {
			printf("%d", love % base);
			love /= base;
		} 
		printf("\n");
	} else {
		if (base == 16) {
			while (love) {
				if (love % base == 10) printf("A");
				if (love % base == 11) printf("B");
				if (love % base == 12) printf("C");
				if (love % base == 13) printf("D");
				if (love % base == 14) printf("E");
				if (love % base == 15) printf("F");
				if (love % base < 10) printf("%d", love % base);
				love /= base;
			}
            printf("\n");
		} else {
			printf("暂时技术有限，无能无力。\n");
		}
	}
	return ;
}

int main() {
	int base;
    printf("请输入进制数：");	
	scanf("%d", &base);
    base_func(base);
	
	return 0;
} 
