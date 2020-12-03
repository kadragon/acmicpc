// https://www.acmicpc.net/problem/19945
// 새로운 언어 CC

#include <cstdio>

int main() {
    int n, c = 0;
    scanf("%d", &n);
    if (n < 0)
        c = 32;
    else if (n == 0)
        c = 1;
    else
        while (n) {
            n /= 2;
            c++;
        }
    printf("%d", c);
}
