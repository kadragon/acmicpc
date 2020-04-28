//
// Created by kangdonguk on 2020/04/28.
//

// https://www.acmicpc.net/problem/2875
// 대회 or 인턴

#include <cstdio>

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    while (k > 0) {
        n > m * 2 ? n-- : m--;
        k--;
    }

    printf("%d", n / 2 > m ? m : n / 2);
}