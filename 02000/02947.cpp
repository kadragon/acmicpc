// https://www.acmicpc.net/problem/2947
// 나무 조각

#include <cstdio>

int main() {
    int d[5], f = 1, t;
    for (int i = 0; i < 5; i++)
        scanf("%d", d + i);

    while (f) {
        f = 0;
        for (int i = 0; i < 4; i++) {
            if (d[i] > d[i + 1]) {
                t = d[i];
                d[i] = d[i + 1];
                d[i + 1] = t;
                for (int i = 0; i < 5; i++)
                    printf("%d ", d[i]);
                printf("\n");
                f = 1;
            }
        }
    }
}