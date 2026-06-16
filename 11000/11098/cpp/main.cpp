//
// Created by kangdonguk on 2020/05/30.
//

// https://www.acmicpc.net/problem/11098
// 첼시를 도와줘!

#include <stdio.h>

int main() {
    char s[100][21];
    int t, a[100], p, m;
    scanf("%d", &t);

    while (t--) {
        m = 0;
        scanf("%d", &p);

        for (int i = 0; i < p; i++) {
            scanf("%d %s", a + i, s[i]);
            if (a[m] < a[i]) m = i;
        }

        printf("%s\n", s[m]);
    }
}
