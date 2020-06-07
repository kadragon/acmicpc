//
// Created by kangdonguk on 2020/06/07.
//

// https://www.acmicpc.net/problem/3040
// 백설 공주와 일곱 난쟁이

#include <stdio.h>

int b[9], a[9], p = 0;

void f(int n, int s, int c) {
    if (c == 7 and s == 100) {
        for (int i = 0; i < 9; i++)
            if (b[i] == 1)
                printf("%d\n", a[i]);
        p = 1;
        return;
    }

    if (n >= 9 or s > 100 or p)
        return;

    b[n] = 1;
    f(n + 1, s + a[n], c + 1);

    b[n] = 0;
    f(n + 1, s, c);
}

int main() {
    for (int i = 0; i < 9; i++)
        scanf("%d", a + i);

    f(0, 0, 0);
}
