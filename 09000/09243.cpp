// https://www.acmicpc.net/problem/9243
// 파일 완전 삭제

#include <cstdio>
#include <string.h>

int main() {
    int n, ans = 1, i = -1;
    char a[1001], b[1001];
    scanf("%d", &n);
    scanf("%s %s", a, b);
    n = n % 2;
    while (a[++i]) {
        if ((a[i] == b[i]) == n) {
            ans = 0;
            break;
        }
    }

    printf("Deletion %s", ans ? "succeeded" : "failed");
}