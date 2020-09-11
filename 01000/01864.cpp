// https://www.acmicpc.net/problem/1864
// 문어 숫자

#include <cstdio>

int main() {
    char s[9], p[] = "-\\(@?>&%";

    while (true) {
        scanf("%s", s);
        if (s[0] == '#')
            break;

        int a = 0, b = 0;
        for (int i = 0; s[i]; i++) {
            a *= 8, b *= 8;
            if (s[i] == '/')
                b += 1;
            else {
                for (int j = 0; p[j]; j++) {
                    if (p[j] == s[i]) {
                        a += j;
                        break;
                    }
                }
            }
        }
        printf("%d\n", a - b);
    }
}
