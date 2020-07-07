#include <cstdio>
#include <string.h>

int de[40001], p = 20000, q = 20000, n, t, x;

int flag(char *s) {
    int f;
    char d[][11] = {"push_front", "push_back", "pop_front", "pop_back", "size", "empty", "front", "back"};
    for (int i = 0; i < 8; i++) {
        if (strcmp(d[i], s) == 0) {
            f = i;
            break;
        }
    }
    return f;
}

int main() {
    char s[11];
    scanf("%d", &n);
    while (n--) {
        scanf("%s", s);
        switch (flag(s)) {
        case 0:
            scanf("%d", &t);
            de[--p] = t;
            break;
        case 1:
            scanf("%d", &t);
            de[q++] = t;
            break;
        case 2:
            printf("%d\n", p == q ? -1 : de[p++]);
            break;
        case 3:
            printf("%d\n", p == q ? -1 : de[--q]);
            break;
        case 4:
            printf("%d\n", q - p);
            break;
        case 5:
            printf("%d\n", q - p ? 0 : 1);
            break;
        case 6:
            printf("%d\n", p == q ? -1 : de[p]);
            break;
        case 7:
            printf("%d\n", p == q ? -1 : de[q - 1]);
            break;
        }
    }
}