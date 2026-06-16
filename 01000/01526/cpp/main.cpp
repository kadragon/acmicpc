// https://www.acmicpc.net/problem/1526
// 가장 큰 금민수

#include <cstdio>

int n, a;

void f(int k) {
    if (k > n)
        return;

    a = k > a ? k : a;
    f(k * 10 + 4);
    f(k * 10 + 7);
}

int main() {
    scanf("%d", &n);
    f(0);
    printf("%d", a);
}
