/*************************************************************************
	> File Name: test.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月02日 星期五 16时49分50秒
 ************************************************************************/

#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#define swap(a, b) {\
    __typeof(a) temp = a;\
    a = b; b = temp;\
}

int main() {
    int a,b;
    cin >> a >> b;
    swap(a,b)

    cout << a << " " << b << endl;
    return 0;
}
