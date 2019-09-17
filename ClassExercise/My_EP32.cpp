/*************************************************************************
	> File Name: My_EP32.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年06月16日 星期日 14时49分14秒
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;

bool is_valid() {

}

int main() {
    int sum;
    for (int a = 1; a < 100; a++) {
        for (int b = 1; b < 10000; b++) {
            if (!is_valid(a, b, a * b)) continue;
            sum += a * b;
        }
    }

    return 0;
}
