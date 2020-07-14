// https://www.acmicpc.net/problem/1547
// 공

#include <cstdio>

int main() {
    int n, a, b, d[4] = {0, 1, 2, 3};
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &a, &b);
        for (int i = 1; i <= 3; i++)
            if (d[i] == a)
                d[i] = b;
            else if (d[i] == b)
                d[i] = a;
    }
    printf("%d", d[1]);
}