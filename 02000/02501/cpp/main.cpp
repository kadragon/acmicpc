//
// Created by kangdonguk on 2020/04/20.
//

// https://www.acmicpc.net/problem/2501
// 약수 구하기

#include <stdio.h>

int main() {
    int n, k, ans = 0;
    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n and k > 0; i++)
        if (n % i == 0)
            if (--k == 0)
                ans = i;

    printf("%d", ans);
}
