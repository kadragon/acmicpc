//
// Created by kangdonguk on 2020/06/25.
//

// https://www.acmicpc.net/problem/3058
// 짝수를 찾아라

#include <stdio.h>

int main() {
    int t, a, m, p;
    scanf("%d", &t);
    while (t--) {
        a = 0, m = 100;
        for (int i = 0; i < 7; i++) {
            scanf("%d", &p);
            if (p % 2 == 0) {
                a += p;
                if (m > p) m = p;
            }
        }
        printf("%d %d\n", a, m);
    }
}
