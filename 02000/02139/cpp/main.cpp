// https://www.acmicpc.net/problem/2139
// 나는 너가 살아온 날을 알고 있다

#include <cstdio>

int main() {
    int d, m, y, a;
    int d_len[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while (true) {
        a = 0;
        scanf("%d %d %d", &d, &m, &y);
        if (!d && !m && !y)
            break;

        if (m > 2)
            if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
                a++;

        for (int i = 1; i < m; i++)
            a += d_len[i];

        printf("%d\n", a + d);
    }
}