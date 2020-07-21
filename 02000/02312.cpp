// https://www.acmicpc.net/problem/2312
// 수 복원하기

#include <cstdio>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, k = 2, p, i, d = 0;
        scanf("%d", &n);
        while (n > 1) {
            if (n % k == 0) {
                d++;
                n /= k;
            } else {
                if (d) {
                    printf("%d %d\n", k, d);
                    d = 0;
                }
                k++;
            }
        }
        printf("%d %d\n", k, d);
    }
}
