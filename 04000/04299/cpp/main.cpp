// https://www.acmicpc.net/problem/4299
// AFC 윔블던

#include <cstdio>

int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = (a + b) / 2;
    c = c > a - c ? c : a - c;
    if (2 * c - a == b and a >= c)
        printf("%d %d", c, a - c);
    else
        printf("-1");
}
