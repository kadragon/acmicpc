// https://www.acmicpc.net/problem/1037
// 약수

#include <cstdio>

int main() {
    int n, mi = 1000001, ma = 1, t;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &t);
        if (t < mi)
            mi = t;
        if (t > ma)
            ma = t;
    }
    printf("%d", mi * ma);
}