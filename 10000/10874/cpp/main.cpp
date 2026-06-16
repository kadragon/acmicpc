// https://www.acmicpc.net/problem/10874
// 이교수님의 시험

#include <cstdio>

int main() {
    int n, t, a;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        a = 1;
        for (int j = 1; j <= 10; j++) {
            scanf("%d", &t);
            if (t != (j - 1) % 5 + 1)
                a = 0;
        }
        if (a)
            printf("%d\n", i);
    }
}