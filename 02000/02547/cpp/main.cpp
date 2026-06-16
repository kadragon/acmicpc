// https://www.acmicpc.net/problem/2547
// 사탕 선생 고창영

#include <cstdio>

int n;
long long s, t;

void input() {
    s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &t);
        s += t % n;
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        input();
        printf("%s\n", s % n ? "NO" : "YES");
    }
}