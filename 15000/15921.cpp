// https://www.acmicpc.net/problem/15921
// 수찬은 마린보이야!!

#include <cstdio>

int main() {
    int n, t;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &t);

    printf(n ? "1.00" : "divide by zero");
}
