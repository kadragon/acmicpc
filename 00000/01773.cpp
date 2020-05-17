//
// Created by kangdonguk on 2020/05/17.
//

// https://www.acmicpc.net/problem/1773
// 폭죽쇼

#include <stdio.h>

int n, c, a[2000001], t, p;

int main() {
    scanf("%d %d", &n, &c);

    while (n--) {
        scanf("%d", &t);
        if (!a[t])
            for (int i = t; i <= c; i += t)
                if (!a[i])
                    p++, a[i] = 1;
    }

    printf("%d", p);
}