/*************************************************************************
	> File Name: 236.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年06月13日 星期四 19时16分21秒
 ************************************************************************/

#include<iostream>
using namespace std;

void output(int k, int m, int ind, int n) {
    if (k == m) {
        return ;
    }
    for (int i = ind + 1; i <= n; i++) {
        output(k + 1, m, i, n);
    }
    return ;
}
