//
// Created by kangdonguk on 2020/05/02.
//

// https://www.acmicpc.net/problem/1475
// 방 번호

#include <cstdio>

int a[10], m;

int main() {
    char s[8];
    scanf("%s", s);

    for (int i = 0; s[i]; i++)
        a[s[i] - '0']++;

    a[6] = (a[6] + a[9]) / 2 + (a[6] + a[9]) % 2;

    for (int i = 0; i < 9; i++)
        m = m > a[i] ? m : a[i];

    printf("%d", m);
}