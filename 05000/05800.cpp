// https://www.acmicpc.net/problem/5800
// 성적 통계

#include <algorithm>
#include <cstdio>

int main() {
    int n, k, d[100], a, t, j, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        a = 0;
        scanf("%d", &k);
        for (j = 0; j < k; j++)
            scanf("%d", d + j);

        std::sort(d, d + k);

        for (j = 0; j < k - 1; j++) {
            t = d[j + 1] - d[j];
            if (t > a)
                a = t;
        }

        printf("Class %d\nMax %d, Min %d, Largest gap %d\n", i, d[k - 1], d[0], a);
    }
}
