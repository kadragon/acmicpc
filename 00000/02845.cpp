//
// Created by kangdonguk on 2020/04/29.
//

// https://www.acmicpc.net/problem/2845
// 파티가 끝나고 난 뒤

#include <cstdio>

int main() {
    int l, p, n = 5, t;
    scanf("%d %d", &l, &p);

    while (n--) {
        scanf("%d", &t);
        printf("%d ", t - l * p);
    }
}