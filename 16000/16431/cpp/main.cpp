// https://www.acmicpc.net/problem/16431
// 베시와 데이지

#include <cstdio>
#include <stdlib.h>

int main() {
    int ax, ay, bx, by, cx, cy, b, d, p, q;
    scanf("%d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy);
    d = abs(bx - cx) + (int)abs(by - cy);
    p = abs(ax - cx), q = abs(ay - cy);
    b = abs(p - q) + (p < q ? p : q);

    printf("%s", b == d ? "tie" : b < d ? "bessie" : "daisy");
}
