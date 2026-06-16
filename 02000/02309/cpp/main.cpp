//
// Created by kangdonguk on 2020/04/27.
//

// https://www.acmicpc.net/problem/2309
// 일곱 난쟁이

#include <cstdio>
#include <algorithm>

int a[9], d[9], ans = 0;

void f(int n, int c, int sum) {
    if (sum == 100 and c == 7) {
        ans = 1;
        return;
    }

    if (sum > 100 or c > 7)
        return;

    if (ans == 0)
        for (int i = n + 1; i < 9; i++) {
            d[i] = 1;
            f(i, c + 1, sum + a[i]);
            if (ans == 1)
                break;

            d[i] = 0;
        }
}

int main() {
    for (int i = 0; i < 9; i++)
        scanf("%d", &a[i]);

    std::sort(a, a + 9);

    d[0] = 1;
    f(0, 1, a[0]);

    if (ans == 0) {
        d[0] = 0;
        f(0, 0, 0);
    }

    for (int i = 0; i < 9; i++)
        if (d[i] == 1)
            printf("%d\n", a[i]);

}
