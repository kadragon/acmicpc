// https://www.acmicpc.net/problem/2535
// 아시아 정보올림피아드

#include <algorithm>
#include <cstdio>

typedef struct RESULT {
    int c, p, r;
} result;

bool compare(const result a, const result b) {
    return a.r > b.r;
}

result d[101];

int main() {
    int n, p[101] = {0}, q = 3;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d %d %d", &d[i].c, &d[i].p, &d[i].r);

    std::sort(d, d + n, compare);

    for (int i = 0; i < n and q; i++)
        if (p[d[i].c] < 2) {
            printf("%d %d\n", d[i].c, d[i].p);
            p[d[i].c]++;
            q--;
        }
}