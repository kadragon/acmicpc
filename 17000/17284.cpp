// https://www.acmicpc.net/problem/17284
// Vending Machine

#include <cstdio>

int main() {
    int s = 5000, m[] = {0, 500, 800, 1000};
    char p[255];
    scanf("%[^\n]s", p);

    for (int i = 0; p[i]; i++) {
        if (p[i] == ' ')
            continue;
        s -= m[p[i] - '0'];
    }

    printf("%d", s);
}
