/*************************************************************************
	> File Name: OJ253.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年06月29日 星期六 19时21分13秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 2500

struct Range {
    int x, y;
} arr[MAX_N + 5];

int cnt[MAX_N + 5];

bool cmp(const Range &a, const Range &b) {
    if (a.y- b.y) return a.y < b.y;
    return a.x < b.x;
}


int main() {
    int n, m;
    cin >> n >> m;
    for(int i =0; i < n; i++) {
        cin >> arr.x >> arr.y;
    }
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        cnt[a] += b;
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < m; i++) {
        int flag= -1;
        for (int j = arr[i].x; j <= arr.[j] && flag = -1; j++) {
            if (cnt[j] == 0) continue;
            flag = j;
        }
        if (flag != -1) cnt[j] -= 1, ans +=1;
    }
    cout << ans << endl;
    return 0;
}
