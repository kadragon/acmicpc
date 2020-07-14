// https://www.acmicpc.net/problem/4999
// 아!

#include <cstdio>
#include <string.h>

int main() {
    char a[1001], b[1001];
    scanf("%s %s", a, b);
    printf("%s", strlen(a) >= strlen(b) ? "go" : "no");
}