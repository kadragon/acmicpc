// https://www.acmicpc.net/problem/11549
// Identifying tea

#include <cstdio>

int main() {
    int a, t, c = 5, s = 0;
    scanf("%d", &a);
    while (c--) {
        scanf("%d", &t);
        if (a == t)
            s++;
    }
    printf("%d", s);
}