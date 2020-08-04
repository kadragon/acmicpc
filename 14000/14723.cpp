// https://www.acmicpc.net/problem/14723
// 이산수학 과제

#include <cstdio>

int main() {
    int n, k = 1;
    scanf("%d", &n);
    while (!(n <= k)) {
        n -= k;
        k++;
    }
    printf("%d %d", k - n + 1, n);
}