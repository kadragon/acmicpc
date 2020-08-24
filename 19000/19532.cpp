// https://www.acmicpc.net/problem/19532
// 수학은 비대면강의입니다

#include <cstdio>

int main() {
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    for (int i = -999; i < 1000; i++)
        for (int j = -999; j < 1000; j++)
            if ((a * i + b * j == c) and (d * i + e * j == f)) {
                printf("%d %d", i, j);
                return 0;
            }
}
