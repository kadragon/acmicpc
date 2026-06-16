// https://www.acmicpc.net/problem/14720
// 우유 축제

#include <stdio.h>

int main() {
    int n, a = 0, t, w = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &t);
        if (t == w)
            a++, w = ++w % 3;
    }
    printf("%d", a);
}
