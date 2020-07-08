// https://www.acmicpc.net/problem/1874
// 스택 수열

#include <cstdio>

int d[100001], n, t, h = 0, s = 1, q, f;
char p[200001];

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &t);
        while (s <= t) {
            d[h++] = s++;
            p[q++] = '+';
        }
        if (d[h - 1] == t) {
            h--;
            p[q++] = '-';
        } else {
            f = 1;
            break;
        }
    }
    if (f) {
        printf("NO");
    } else {
        for (int i = 0; i < q; i++)
            printf("%c\n", p[i]);
    }
}