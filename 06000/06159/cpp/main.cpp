//
// Created by kangdonguk on 2020/06/03.
//

// https://www.acmicpc.net/problem/6159
// 코스튬 파티

#include <stdio.h>
#include <algorithm>

int main() {
    int n, s, a = 0, d[20000];
    scanf("%d %d", &n, &s);
    for (int i = 0; i < n; i++)
        scanf("%d", d + i);

    std::sort(d, d + n);

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++) {
            if (d[i] + d[j] <= s) a++;
            else break;
        }

    printf("%d", a);
}