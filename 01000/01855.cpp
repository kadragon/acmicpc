// https://www.acmicpc.net/problem/1855
// 암호

#include <cstdio>

int main() {
    int k, x, i = 0, l;
    char s[201], a[200][200];
    scanf("%d %s", &k, s);

    while (s[i]) {
        x = i / k;
        if (!(x % 2))
            for (int j = 0; j < k; j++, i++)
                a[x][j] = s[i];
        else
            for (int j = k - 1; j >= 0; j--, i++)
                a[x][j] = s[i];
    }
    l = i / k;

    for (int j = 0; j < k; j++)
        for (int i = 0; i < l; i++)
            printf("%c", a[i][j]);
}
