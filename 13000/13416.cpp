//
// Created by kangdonguk on 2020/05/03.
//

// https://www.acmicpc.net/problem/13416
// 주식 투자

#include <cstdio>

int main() {
    int n, a, ans, t, c, d;
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &a);
        ans = 0;

        while (a--) {
            t = 0, c = 3;
            while (c--) {
                scanf("%d", &d);
                t = t > d ? t : d;
            }
            ans += t;
        }
        printf("%d\n", ans);
    }
}