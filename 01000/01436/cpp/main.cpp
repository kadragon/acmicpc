//
// Created by kangdonguk on 2020/03/04.
//

// https://www.acmicpc.net/problem/1436
// 영화감독 숌

#include <stdio.h>

bool check(int n) {
    int c = 0;
    while (n > 100) {
        if (n%1000 == 666)
            return true;
        n /= 10;
    }
    return false;
}

int main() {
    int i, n, ans = 0;
    scanf("%d", &n);

    for (i = 666; ans < n; i++)
        if (check(i))
            ans++;

    printf("%d", --i);

    return 0;
}
