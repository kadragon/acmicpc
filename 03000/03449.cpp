// https://www.acmicpc.net/problem/3449
// 해밍 거리

#include <cstdio>

int main() {
    int n, p;
    char a[101], b[101];
    scanf("%d", &n);
    while (n--) {
        p = 0;
        scanf("%s %s", a, b);
        for (int i = 0; a[i]; i++)
            if (a[i] != b[i])
                p++;
        printf("Hamming distance is %d.\n", p);
    }
}
