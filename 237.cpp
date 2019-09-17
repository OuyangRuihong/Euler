/*************************************************************************
	> File Name: 237.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年06月13日 星期四 19时27分35秒
 ************************************************************************/

#include<iostream>
using namespace std;

int mark[15];
int arr[15];

int output(int k, int n) {
    if (k == n) {
        for(int i = 0; i < n; i++) {
            i == 0 || cout << " ";
            cout << arr[i];
        }
        cout << endl;
        return ;
    }

    for (int i  = cen + 1 ; i <= n; i++) {
        if (mark[i]) continue;
        arr[k] =  i;
        mark[i] = 1;
        output(k + 1, n);
        mark[i] = 0;
    }
    return ;
}

int main() {
    int n, k;
    cin >> n >> k;
    output(k, n);
    return 0;
}
