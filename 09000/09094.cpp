// https://www.acmicpc.net/problem/9094
// 수학적 호기심

#include <cstdio>

int main() {
    int t, n, m;
    scanf("%d", &t);
    while (t--) {
        int a = 0;
        scanf("%d %d", &n, &m);
        for (int i = 1; i < n; i++)
            for (int j = i + 1; j < n; j++)
                if (((i * i + j * j + m) % (i * j)) == 0)
                    a++;

        printf("%d\n", a);
    }
}