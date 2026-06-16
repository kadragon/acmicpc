// https://www.acmicpc.net/problem/5363
// 요다

#include <iostream>

int main() {
    int n, p, q, l;
    char s[101], t[101] = {0};

    scanf("%d\n", &n);
    while (n--) {
        std::cin.getline(s, 101);

        p = 0;
        for (int i = 0; s[i]; i++)
            if (s[i] == ' ')
                if (++p == 2) {
                    s[i] = '\0';
                    printf("%s %s\n", s + i + 1, s);
                    break;
                }
    }
}
