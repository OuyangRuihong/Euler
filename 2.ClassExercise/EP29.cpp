/*************************************************************************
	> File Name: EP29.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月16日 星期五 16时26分23秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
#define MAX_N 10000
#define MAX_M 210

int result[MAX_N + 5][MAX_M + 5];
int result_len = 0;

int find_result(int *num) {
    for (int i = 0; i < result_len; i++) {
        if (memcmp(result + i, num, sizeof(int) * MAX_M)) continue;
        return i + 1;
    }
    return 0;
}

int main() {
    memset(result, 0, sizeof(result));
    for (int a = 2; a <= 100; a++) {
        for (int b = 2; b <= 100; b++) {
            int temp[MAX_M] = {0};
            temp[0] = 1, temp[1] = 1;
            for (int i = 0; i < b; i++) {
                for (int j = 1; j <= temp[0]; j++) temp[j] *= a;
                for (int j = 1; j <= temp[0]; j++) {
                    if (temp[j] < 10) continue;
                    temp[j + 1] += temp[j] / 10;
                    temp[j] %= 10;
                    temp[0] += (j == temp[0]);
                }
            }
            if (find_result(temp) == 0) {
                memcpy(result_len + result, temp, sizeof(int) * MAX_M);
                result_len += 1;
            }
        }
    }
    
    cout << result_len <<endl;
    return 0;
} 
