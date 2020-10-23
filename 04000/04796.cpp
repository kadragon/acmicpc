// https://www.acmicpc.net/problem/4796
// 캠핑

#include <cstdio>

int main() {
    int l, p, v, i = 0;
    while (true) {
        scanf("%d %d %d", &l, &p, &v);
        if (!(l * p * v))
            break;
        printf("Case %d: %d\n", ++i, v / p * l + (l < v % p ? l : v % p));
    }
}
