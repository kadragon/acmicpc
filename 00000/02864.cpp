//
// Created by kangdonguk on 2020/04/16.
//

// https://www.acmicpc.net/problem/2864
// 5와 6의 차이

#include <stdio.h>

int c(const char *n, int t) {
    int a = 0;
    char ch[3] = "65";
    for (int i = 0; n[i]; i++) {
        char p = n[i];
        if (p == ch[t])
            p = t == 0 ? ch[1] : ch[0];

        a = a * 10 + (int) p - 48;
    }

    return a;
}

int main() {
    char n[8], m[8];

    scanf("%s %s", n, m);
    printf("%d %d", c(n, 0) + c(m, 0), c(n, 1) + c(m, 1));
}