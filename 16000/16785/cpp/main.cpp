// https://www.acmicpc.net/problem/16785
// ソーシャルゲーム

#include <cstdio>

int main() {
    int a, b, c, i = 0;
    scanf("%d %d %d", &a, &b, &c);

    while (++i)
        if (a * i + b * (i / 7) >= c)
            break;

    printf("%d", i);
}
