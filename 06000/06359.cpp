//
// Created by kangdonguk on 2020/05/07.
//

// https://www.acmicpc.net/problem/6359
// 만취한 상범

#include <cstdio>

int main() {
    int t, n, ans, a[101];
    scanf("%d", &t);

    while (t--) {
        ans = 0;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
            for (int j = 1; i * j <= n; j++)
                a[i * j] = i == 1 ? 1 : a[i * j] + 1;

        for (int i = 1; i <= n; i++)
            if (a[i] % 2)
                ans++;

        printf("%d\n", ans);
    }
}