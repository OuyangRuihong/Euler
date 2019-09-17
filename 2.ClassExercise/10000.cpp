/*************************************************************************
	> File Name: 10000.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月09日 星期五 20时12分15秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 40000

int num1[MAX_N + 5] = {1, 1};

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= num1[0]; j++) num1[j] *= i;
        //处理进位
        for (int j = 1; j <= num1[0]; j++) {
            if (num1[j] < 10) continue;
            num1[j + 1] += num1[j] / 10;
            num1[j] %= 10;
            num1[0] += (j == num1[0]);
        }
    }
    //输出
    for (int i = num1[0]; i > 0; i--) {
        cout << num1[i];
    }
    cout << endl;

    return 0;
}
