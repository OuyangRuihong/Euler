/*************************************************************************
	> File Name: a.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年07月02日 星期二 18时05分01秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_D 500



int main() {
    int n;
    int f[3];
    f[0] = 1, f[1] = 0, f[2] = 1;
    cin >> n;
    if (n < 2) {
        cout << 0 << endl;
        return 0;
    }
    if (n == 2 || n == 3) {
        cout << 1 << endl;
        return 0;
    }
    //(i - 1) % 3 <- n
    for (int i = 4; i <= n; i++) {
        f[i % 3] = f[(i - 2) % 3] + f[(i - 3) % 3];
        
    }
    cout << f[n % 3] << endl;


    return 0;
}
