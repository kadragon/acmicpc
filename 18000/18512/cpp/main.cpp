// https://www.acmicpc.net/problem/18512
// 점프 점프

#include <cstdio>

int main() {
    int x, y, p1, p2, ans = -1;
    scanf("%d %d %d %d", &x, &y, &p1, &p2);
    while (true) {
        if (p1 < p2)
            p1 += x;
        else
            p2 += y;
        if (p1 == p2) {
            ans = p1;
            break;
        }
        if (p1 > 100000 or p2 > 100000)
            break;
    }
    printf("%d", ans);
}