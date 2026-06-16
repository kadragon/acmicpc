// https://www.acmicpc.net/problem/11723
// 집합

#include <cstdio>

int main() {
    int m, t, s[21] = {0};
    char o[7];
    scanf("%d", &m);
    while (m--) {
        scanf("%s %d", o, &t);
        if (o[1] == 'd')
            s[t] = 1;
        else if (o[1] == 'e')
            s[t] = 0;
        else if (o[1] == 'h')
            printf("%d\n", s[t]);
        else if (o[1] == 'o')
            s[t] = s[t] ? 0 : 1;
        else if (o[1] == 'l')
            for (int i = 1; i <= 20; i++)
                s[i] = 1;
        else
            for (int i = 1; i <= 20; i++)
                s[i] = 0;
    }
}
