// https://www.acmicpc.net/problem/10157
// 자리배정

#include <cstdio>

int main() {
    int c, r, k;
    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};
    scanf("%d %d %d", &c, &r, &k);
    if (c * r < k) {
        printf("0");
        return 0;
    }

    int t = 0;
    while ((c + r - t * 4) * 2 - 4 < k) {
        k -= ((c + r - t * 4) * 2 - 4);
        t++;
    }

    c -= t * 2, r -= t * 2;
    int sx = 1, sy = 1;
    for (int i = 1, p = 0; i < k; i++) {
        sx += dx[p], sy += dy[p];
        if (p == 0 and sy == r)
            p++;
        else if (p == 1 and sx == c)
            p++;
        else if (p == 2 and sy == 1)
            p++;
    }

    printf("%d %d", t + sx, t + sy);
}
