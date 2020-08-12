// https://www.acmicpc.net/problem/14914
// 사과와 바나나 나눠주기

#include <cstdio>

int gcd(int a, int b) {
    return a ? gcd(b % a, a) : b;
}

int main() {
    int a, b, c, i;
    scanf("%d %d", &a, &b);
    c = gcd(a, b);

    for (i = 1; i <= c; i++)
        if (!(c % i))
            printf("%d %d %d\n", i, a / i, b / i);
}
