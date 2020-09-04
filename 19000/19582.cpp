// https://www.acmicpc.net/problem/19582
// 200년간 폐관수련했더니 PS 최강자가 된 건에 대하여

#include <cstdio>

int main() {
    int n, x, y, a = 0, p = 1, max = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &x, &y);
        if (x < a) {
            if (p) {
                p = 0;
                if (max < y or x < a - max)
                    continue;

                a -= max;
            } else
                break;
        }
        a += y;
        if (max < y and p)
            max = y;
    }

    printf("%s", n == -1 ? "Kkeo-eok" : "Zzz");
}
