// https://www.acmicpc.net/problem/10845
// 큐

#include <cstdio>
#include <string.h>

int d[10001], p, q;

int f(char *s) {
    char p[6][6] = {"push", "pop", "size", "empty", "front", "back"};
    int t;
    for (int i = 0; i < 6; i++)
        if (strcmp(s, p[i]) == 0) {
            t = i;
            break;
        }
    return t;
}

int main() {
    int n, t, r;
    char s[6];
    scanf("%d", &n);
    while (n--) {
        scanf("%s", s);
        r = f(s);
        switch (r) {
        case 0:
            scanf("%d", &t);
            d[q++] = t;
            break;
        case 1:
            t = (p < q ? d[p++] : -1);
            break;
        case 2:
            t = q - p;
            break;
        case 3:
            t = (p == q ? 1 : 0);
            break;
        case 4:
            t = (p < q ? d[p] : -1);
            break;
        case 5:
            t = (p < q ? d[q - 1] : -1);
            break;
        }
        if (r)
            printf("%d\n", t);
    }
}