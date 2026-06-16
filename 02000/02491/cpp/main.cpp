// https://www.acmicpc.net/problem/2491
// 수열

#include <cstdio>

int main() {
    int n, max_len = 0, now_len_up = 0, now_len_down = 0, d[100001] = {0};
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", d + i);
        if (d[i] >= d[i - 1])
            now_len_up++;
        else {
            if (max_len < now_len_up)
                max_len = now_len_up;
            now_len_up = 1;
        }

        if (d[i] <= d[i - 1] or i == 1)
            now_len_down++;
        else {
            if (max_len < now_len_down)
                max_len = now_len_down;
            now_len_down = 1;
        }
    }
    if (max_len < now_len_up)
        max_len = now_len_up;
    if (max_len < now_len_down)
        max_len = now_len_down;

    printf("%d", max_len);
}
