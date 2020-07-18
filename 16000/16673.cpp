// https://www.acmicpc.net/problem/16673
// 고려대학교에는 공식 와인이 있다

#include <cstdio>

int main() {
    int a = 0, c, k, p;
    scanf("%d %d %d", &c, &k, &p);
    for (int i = 1; i <= c; i++)
        a += i * k + i * i * p;

    printf("%d", a);
}
