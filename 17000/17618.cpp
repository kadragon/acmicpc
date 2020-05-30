//
// Created by kangdonguk on 2020/05/30.
//

// https://www.acmicpc.net/problem/17618
// 신기한 수

#include <stdio.h>

int main() {
    int n, a = 0, t, s, i;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        t = i, s = 0;
        while (t) {
            s += t % 10;
            t /= 10;
        }

        if (!(i % s)) a++;
    }

    printf("%d", a);
}
