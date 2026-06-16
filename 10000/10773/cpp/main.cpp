//
// Created by kangdonguk on 2020/04/27.
//

// https://www.acmicpc.net/problem/10773
// 제로

#include <cstdio>

int main() {
    int n, sum = 0, a[100001], h = 0;
    scanf("%d", &n);

    while (n--) {
        scanf("%d", a + h);
        a[h] > 0 ? h++ : h--;
    }

    for (int i = 0; i < h; i++)
        sum += a[i];

    printf("%d", sum);
}