// https://www.acmicpc.net/problem/1251
// 단어 나누기

#include <cstdio>
#include <string.h>

int main() {
    char s[51], t[51], a[51];
    int l;
    scanf("%s", s);

    l = (int)strlen(s);
    t[l] = a[l] = '\0';

    for (int i = 0; s[i]; i++)
        for (int j = i + 2; s[j]; j++) {
            int st[] = {0, i + 1, j};
            int en[] = {i, j - 1, l - 1};

            for (int p = 0; p < 3; p++)
                for (int x = st[p], y = en[p]; x <= y; x++, y--)
                    t[y] = s[x], t[x] = s[y];

            if ((i == 0 and j == 2) or strncmp(t, a, l) <= 0)
                strncpy(a, t, l);
        }

    printf("%s", a);
}
