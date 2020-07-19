// https://www.acmicpc.net/problem/2422
// 한윤정이 이탈리아에 가서 아이스크림을 사먹는데

#include <cstdio>

int d[201][201], n, m, a, x, y;

int main() {
    scanf("%d %d", &n, &m);
    while (m--) {
        scanf("%d %d", &x, &y);
        d[x][y] = d[y][x] = 1;
    }

    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            if (!d[i][j])
                for (int k = j + 1; k <= n; k++)
                    if (!d[i][k] and !d[j][k])
                        a++;

    printf("%d", a);
}