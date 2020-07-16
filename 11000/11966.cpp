// https://www.acmicpc.net/problem/11966
// 2의 제곱인가?

#include <cstdio>

int main() {
    int n, p = 1, a = 0;
    scanf("%d", &n);
    for (int i = 1; i < 32; i++) {
        if (p == n) {
            a = 1;
            break;
        }
        p *= 2;
    }
    printf("%d", a);
}