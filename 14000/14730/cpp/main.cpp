// https://www.acmicpc.net/problem/14730
// 謎紛芥索紀 (Small)

#include <cstdio>

int main() {
    int n, a = 0, c, k;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &c, &k);
        a += c * k;
    }
    printf("%d", a);
}
