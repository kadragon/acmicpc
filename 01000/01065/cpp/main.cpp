//
// Created by kangdonguk on 2020/02/28.
//

// https://www.acmicpc.net/problem/1065
// 셀프 넘버

#include <stdio.h>

int ans = 0, n;

void h(int s, int a) {
    int next_k = s;
    for (int j = 0; j < 2; j++) {
        next_k += a;
        s = s * 10 + next_k;
        if (next_k < 0 || next_k > 9 || s > n || s < 0)
            return;
    }
    ans += 1;
}


int main(void) {
    scanf("%d", &n);

    if (n > 99) {
        for (int i = 1; i < n / 100 + 1; i++)
            for (int j = -4; j <= 4; j++) {
                if (i + j * 2 >= 0)
                    h(i, j);
            }
        ans += 99;
    } else
        ans = n;

    printf("%d", ans);

    return 0;
}
