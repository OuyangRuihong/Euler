/*************************************************************************
	> File Name: EP32.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年06月16日 星期日 14时11分03秒
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;

inline int digits(int x) {
    if (x == 0) return 1;
    return floor(log10(x)) + 1;
}

bool add_to_num(int x, int *num) {
    while(x) {
        if (num[x % 10]) return false;
        num[x % 10] += 1;
        x /= 10;
    }
    return true;
}

bool is_valid(int a, int b, int c) {
    if (digits(a) + digits(b) + digits(c) - 9) return false;
    int num[10] = {0};
    num[0] = 1;
    int flag = 1;
    flag = flag && add_to_num(a, num);
    flag = flag && add_to_num(b, num);
    flag = flag && add_to_num(c, num);
    return flag;
}

int main() {
    int sum;
    int can[10000];
    for (int a =1; a < 100; a++) {
        for (int b = a + 1; b < 10000; b++) {
            if (!is_valid(a, b, a * b)) continue;
                if (can[a * b] != 1)sum += a * b;
                can[a * b] = 1;
                cout << a << "*" << b << "=" << a * b << endl;
        }
    }
    cout << sum << endl;
    return 0;
}


