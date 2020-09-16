// https://www.acmicpc.net/problem/1374
// 강의실

#include <algorithm>
#include <cstdio>

int main() {
    int n, s[100001], e[100001], t, m = 0, place = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d %d %d", &t, &s[i], &e[i]);

    std::sort(s, s + n);
    std::sort(e, e + n);

    for (int i = 0, j = 0; i < n; i++) {
        place++;
        while (e[j] <= s[i])
            j++, place--;

        if (place > m)
            m = place;
    }

    printf("%d", m);
}
