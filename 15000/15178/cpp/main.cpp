// https://www.acmicpc.net/problem/15178
// Angles

#include <cstdio>

int main() {
    int t, a, b, c;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d %d", &a, &b, &c);
        printf("%d %d %d %s\n", a, b, c, (a + b + c == 180) ? "Seems OK" : "Check");
    }
}