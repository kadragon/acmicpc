// https://www.acmicpc.net/problem/10807
// 개수 세기

#include <cstdio>

int n, d[201], v, t;

int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &t);
        d[t + 100]++;
    }
    scanf("%d", &v);
    printf("%d", d[v + 100]);
}