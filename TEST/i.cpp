/*************************************************************************
	> File Name: i.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年07月02日 星期二 19时29分23秒
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int f[3];
    cin >> f[0] >> f[1] >> f[2];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (f[j] > f[j + 1]) swap(f[j], f[j + 1]);
        }
    }

    if ((f[0] + f[1]) > f[2]) {
        if ((f[0] * f[0] + f[1] * f[1]) > f[2] * f[2]) cout << "acute triangle" << endl;
        if ((f[0] * f[0] + f[1] * f[1]) == f[2] * f[2]) cout << "right triangle" << endl;
        if ((f[0] * f[0] + f[1] * f[1]) < f[2] * f[2]) cout << "obtuse triangle" << endl;
    } else {
        cout << "illegal triangle" << endl;
    }
    




    return 0;
}
