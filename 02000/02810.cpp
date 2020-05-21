//
// Created by kangdonguk on 2020/05/19.
//

// https://www.acmicpc.net/problem/2810
// 컵홀더

#include <stdio.h>

int main() {
    int n, a, i;
    char s[51];
    scanf("%d %s", &n, s);

    for (i = 0, a = n; i < n; i++)
        if (s[i] == 'L')
            i++, a--;

    printf("%d", a == n ? n : a + 1);
}