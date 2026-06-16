// https://www.acmicpc.net/problem/13300
// 방 배정

#include <cstdio>

int n, k, y[2][7], a, b, p;

int main() {
    scanf("%d %d", &n, &k);
    while (n--) {
        scanf("%d %d", &a, &b);
        y[a][b]++;
    }

    for (int i = 0; i < 2; i++)
        for (int j = 1; j <= 6; j++)
            p += (y[i][j] / k) + (y[i][j] % k ? 1 : 0);

    printf("%d", p);
}