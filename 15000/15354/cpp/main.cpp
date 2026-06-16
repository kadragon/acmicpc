// https://www.acmicpc.net/problem/15354
// Aron

#include <cstdio>

int main() {
    int n, a = 1;
    char c = '_', t;
    scanf("%d\n", &n);
    while (n--) {
        scanf("%1c\n", &t);
        if (c != t)
            a++, c = t;
    }
    printf("%d", a);
}
