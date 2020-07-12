// https://www.acmicpc.net/problem/5524
// 입실 관리

#include <cstdio>

int main() {
    int n;
    char s[21];
    scanf("%d", &n);
    while (n--) {
        scanf("%s", s);
        for (int i = 0; s[i]; i++)
            printf("%c", s[i] < 'a' ? s[i] + 32 : s[i]);
        printf("\n");
    }
}