// https://www.acmicpc.net/problem/12813
// 이진수 연산

#include <cstdio>

int main() {
    char a[100001], b[100001];
    scanf("%s %s", a, b);

    for (int i = 0; a[i]; i++)
        printf("%d", a[i] == '1' and b[i] == '1' ? 1 : 0);
    printf("\n");

    for (int i = 0; a[i]; i++)
        printf("%d", a[i] == '1' or b[i] == '1' ? 1 : 0);
    printf("\n");

    for (int i = 0; a[i]; i++)
        printf("%d", a[i] + b[i] == '0' + '1' ? 1 : 0);
    printf("\n");

    for (int i = 0; a[i]; i++)
        printf("%d", a[i] == '1' ? 0 : 1);
    printf("\n");

    for (int i = 0; b[i]; i++)
        printf("%d", b[i] == '1' ? 0 : 1);
    printf("\n");
}
