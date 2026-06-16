// https://www.acmicpc.net/problem/9550
// 아이들은 사탕을 좋아해

#include <cstdio>

int main() {
    int t, n, k, a, p;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &k);
        a = 0;
        while (n--) {
            scanf("%d", &p);
            a += p / k;
        }
        printf("%d\n", a);
    }
}