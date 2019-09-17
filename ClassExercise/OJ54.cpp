/*************************************************************************
	> File Name: OJ54.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年06月25日 星期二 19时52分52秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 5000

int main() {
    while ((cin >> x) != 0) {
        for (int i = 1; i <= x; i++) {
            for (int j = 1; j <= num1[0]; j++) num1[j] *= i;
            for (int j = 1; j <= num1[0]; j++) {
                if (num1[j] < 10) continue;
                num[num[0] + 1] = 0;
                num1[j + 1] += num1[j] / 10;
                num1[j] %= 10;
                num1[0] += (num1[0] == j);
            }
        }

        num2[0] = num2[1] = 1;
        for (int i =1; i <= num1[0]; i++) {
            if (num1[i] == 0) continue;
            for (int j = )
        }
    }

    return 0;
}
