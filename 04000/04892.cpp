// https://www.acmicpc.net/problem/4892
// 숫자 맞추기 게임

#include <cstdio>

int main() {
    int n, k = 1;
    while (true) {
        scanf("%d", &n);
        if (!n)
            break;
        printf("%d. %s %d\n", k++, n % 2 ? "odd" : "even", n / 2);
    }
}