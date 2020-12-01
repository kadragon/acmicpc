// https://www.acmicpc.net/problem/2564
// 경비원

#include <cstdio>
#include <vector>

std::vector<std::pair<int, int>> p;
int w, h, t, a, b, x, y, ans;

int solve(int q) {
    int f, s;
    f = p[q].first, s = p[q].second;
    if (f == x)
        return s > y ? s - y : y - s;
    if (f * x == 2)
        return h + (s + y < w ? s + y : 2 * w - s - y);
    if (f * x == 3)
        return s + y;
    if (f * x == 4)
        return f == 1 ? w - s + y : w - y + s;
    if (f * x == 6)
        return f == 3 ? h - s + y : h - y + s;
    if (f * x == 8)
        return w - s + h - y;
    if (f * x == 12)
        return w + (s + y < h ? s + y : 2 * h - s - y);
    return 0;
}

int main() {
    scanf("%d %d %d", &w, &h, &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);
        p.push_back({a, b});
    }
    scanf("%d %d", &x, &y);
    for (int i = 0; i < t; i++)
        ans += solve(i);

    printf("%d", ans);
}
