// https://www.acmicpc.net/problem/2480
// 주사위 세개

#include <cstdio>

int a[7], t = 0;
int d[] = {0, 0, 1000, 10000}, p[] = {0, 100, 100, 1000};

int main() {
    for (int i = 0; i < 3; i++) {
        scanf("%d", &t);
        a[t]++;
    }
    for (int i = 3; i > 0; i--)
        for (int j = 6; j > 0; j--)
            if (a[j] == i) {
                printf("%d", d[i] + j * p[i]);
                return 0;
            }
}