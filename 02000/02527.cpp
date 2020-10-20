// https://www.acmicpc.net/problem/2527
// 직사각형

#include <cstdio>

int main() {
    int t = 4;
    char s[] = "abcd";
    while (t--) {
        int a, b, c, d, e, f, g, h, ans;
        scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
        int nx = 0, ny = 0;
        for (int i = a; i <= c and nx < 2 and i <= g; i++)
            if (e <= i and i <= g)
                nx++;
        for (int i = b; i <= d and ny < 2 and i <= h; i++)
            if (f <= i and i <= h)
                ny++;

        if (nx == 2 and ny == 2)
            ans = 0;
        else if (nx == 0 or ny == 0)
            ans = 3;
        else if (nx == 1 and ny == 1)
            ans = 2;
        else
            ans = 1;

        printf("%c\n", s[ans]);
    }
}
