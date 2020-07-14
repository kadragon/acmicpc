// https://www.acmicpc.net/problem/3034
// 앵그리 창영

#include <cstdio>

int main() {
    int n, x, y, z, t;
    scanf("%d %d %d", &n, &x, &y);
    z = x * x + y * y;
    while (n--) {
        scanf("%d", &t);
        t = t * t;
        printf("%s\n", t <= z ? "DA" : "NE");
    }
}