// https://www.acmicpc.net/problem/16199
// 나이 계산하기

#include <cstdio>

int main() {
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    d -= a;
    printf("%d\n", d - (e * 100 + f < b * 100 + c));
    printf("%d\n", d + 1);
    printf("%d", d);
}
