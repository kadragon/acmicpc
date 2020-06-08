//
// Created by kangdonguk on 2020/06/09.
//

// https://www.acmicpc.net/problem/14656
// 조교는 새디스트야!!

#include <stdio.h>

int main() {
    int n, t, a = 0, i;

    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &t);
        if (i != t) a++;
    }

    printf("%d", a);
}
