// https://www.acmicpc.net/problem/13419
// 탕수육

#include <stdio.h>
#include <string.h>

int main() {
    int n, l;
    char s[27];
    scanf("%d", &n);
    while (n--) {
        scanf("%s", s);
        l = strlen(s);
        l = l % 2 ? l : l / 2;
        char a[27], b[27];
        int p = 0, q = 0, i = 0;
        while (q < l) {
            if (!s[i])
                i = 0;
            a[p++] = s[i++];
            if (!s[i])
                i = 0;
            b[q++] = s[i++];
        }
        a[l] = '\0', b[l] = '\0';
        printf("%s\n%s\n", a, b);
    }
}