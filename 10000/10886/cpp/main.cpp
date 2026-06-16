//
// Created by kangdonguk on 2020/04/29.
//

// https://www.acmicpc.net/problem/10886
// 0 = not cute / 1 = cute

#include <cstdio>

int c[2];

int main() {
    int n, t;
    char a[2][20] = {"Junhee is not cute!", "Junhee is cute!"};

    scanf("%d", &n);

    while (n--) {
        scanf("%d", &t);
        c[t]++;
    }

    printf("%s", c[0] > c[1] ? a[0] : a[1]);
}