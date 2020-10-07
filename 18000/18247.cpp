// https://www.acmicpc.net/problem/18247
// 겨울왕국 티켓 예매

#include <cstdio>

int main() {
    int t, n, m;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &m);
        printf("%d\n", n < 12 || m < 4 ? -1 : m * 11 + 4);
    }
}
