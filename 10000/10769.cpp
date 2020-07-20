// https://www.acmicpc.net/problem/10769
// 행복한지 슬픈지

#include <cstdio>

int main() {
    char s[256];
    int a = 0, b = 0;
    fgets(s, 256, stdin);
    for (int i = 0; s[i + 2]; i++)
        if (s[i] == ':' and s[i + 1] == '-') {
            if (s[i + 2] == ')')
                a++;
            else if (s[i + 2] == '(')
                b++;
        }

    printf("%s", a or b ? a == b ? "unsure" : a > b ? "happy" : "sad" : "none");
}
