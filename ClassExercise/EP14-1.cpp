/*************************************************************************
	> File Name: EP14-1.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年06月15日 星期六 19时04分12秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_KEEP_SIZE 1000000

int f[MAX_KEEP_SIZE + 5];

int get_chain_length(long long x) {
    if (x == 1) return 1;
    
    if (x & 1) return get_chain_length(3 * x + 1) + 1;
    return get_chain_length(x / 2) + 1;
}

int main() {
    int max_len =0, num = 0;
    for (int i = 0; i < 1000000; i++) {
        int l = get_chain_length(i);
        if (l > max_len) max_len = l, num = i;
    }
    cout << num << " " << max_len << endl;

    return 0;
}
