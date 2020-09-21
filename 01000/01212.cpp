// https://www.acmicpc.net/problem/1212
// 8진수 2진수

#include <cstdio>

void p(int a) {
    if (a) {
        p(a / 2);
        printf("%d", a % 2);
    }
}

int main() {
    int a, f = 1;
    char s[400000];
    scanf("%s", s);

    if (s[0] == '0') {
        printf("0");
        return 0;
    }

    for (int i = 0; s[i]; i++) {
        a = s[i] - '0';

        if (f == 1) {
            p(a);
            f = 0;
        } else {
            printf("%d", a >= 4 ? 1 : 0);
            printf("%d", a % 4 >= 2 ? 1 : 0);
            printf("%d", a % 2 >= 1 ? 1 : 0);
        }
    }
}
