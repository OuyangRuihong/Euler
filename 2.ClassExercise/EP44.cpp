/*************************************************************************
	> File Name: EP44.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月12日 星期一 14时43分11秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>

typedef long long intl;
intl penragonal(intl n) {
    return n * (3 * n - 1) / 2;
}

intl is_Pentagonal(intl x) {
    intl head = 1, tail = 100000, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (penragonal(mid) == x) return mid;
        else if (penragonal(mid) < x) head = mid + 1;
        else tail = mid - 1;
    }
    return 0;
}

int main() {
    intl i = 1, j = 1, ans = INT32_MAX;
    while (penragonal(j + 1) - penragonal(j) < ans) {
        j += 1;
        i = j - 1;
        for(int i = j - 1; i >= 1 && penragonal(j) - penragonal(i) < ans; i--) {
            if (!is_Pentagonal(penragonal(j) + penragonal(i))) continue;
            if (!is_Pentagonal(penragonal(j) - penragonal(i))) continue; 
            if (penragonal(j) - penragonal(i) < ans)
            //printf("%d->%d\n", penragonal(j), penragonal(i));
            ans = penragonal(j) - penragonal(i);        
        }
    }
    printf("%lld\n", ans);
    return 0;
}
