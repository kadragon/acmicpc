// https://www.acmicpc.net/problem/11000
// 강의실 배정

#include <algorithm>
#include <cstdio>

int main() {
    int n, now = 0, max = 0, s[200001], t[200001];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d %d", s + i, t + i);

    std::sort(s, s + n);
    std::sort(t, t + n);

    for (int i = 0, j = 0; i < n; i++) {
        now++;
        while (s[i] >= t[j] and now > 0)
            j++, now--;

        if (now > max)
            max = now;
    }

    printf("%d", max);
}
