/*************************************************************************
	> File Name: EP09.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年06月16日 星期日 18时43分34秒
 ************************************************************************/

#include<iostream>
using namespace std;

int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}

int main() {
    for (int n = 1; n <=33; n++) {
        for (int m = n + 1; m * m + n * n <= 1000; m++) {
            if(gcd(n, m) != 1) continue;
            int a = 2 * n * m;
            int b = m * m - n * n;
            int c = m * m + n * n;
            if (1000 % (a + b +c) == 0) {
                int k = 1000 / (a + b + c);
                a *= k;
                b *= k;
                c *= k;
                cout << a * b * c << endl;
            }
        }    
    }
    return 0;
}


