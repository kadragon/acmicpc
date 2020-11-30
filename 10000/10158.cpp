// https://www.acmicpc.net/problem/10158
// 개미

#include <cstdio>

int main() {
    int w, h, p, q, t, x, y;
    scanf("%d %d %d %d %d", &w, &h, &p, &q, &t);
    x = (p + t) % (w * 2), y = (q + t) % (h * 2);
    printf("%d %d", x > w ? w * 2 - x : x, y > h ? h * 2 - y : y);
}
