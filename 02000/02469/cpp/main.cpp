// https://www.acmicpc.net/problem/02469
// 사다리 타기

#include <cstdio>

void swap(char *a, char *b) {
    char t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int k, n, t, i, j;
    char s[1001][27], end[27], st[27];
    scanf("%d %d", &k, &n);

    for (i = 0; i < k; i++)
        st[i] = i + 'A';

    scanf("%s", end);
    for (i = 0; i < n; i++) {
        scanf("%s", s[i]);
        if (s[i][0] == '?')
            t = i;
    }

    for (i = 0; i < t; i++)
        for (j = 0; j < k; j++)
            if (s[i][j] == '-')
                swap(&st[j], &st[j + 1]);

    for (i = n - 1; i > t; i--)
        for (j = 0; j < k; j++)
            if (s[i][j] == '-')
                swap(&end[j], &end[j + 1]);

    for (i = 0; i < k - 1; i++)
        if (st[i] == end[i])
            s[t][i] = '*';
        else if (st[i] == end[i + 1] and st[i + 1] and end[i]) {
            s[t][i] = '-';
            swap(&st[i], &st[i + 1]);
        } else {
            for (j = 0; j < k - 1; j++)
                s[t][j] = 'x';
            break;
        }

    printf("%s", s[t]);
}
