//
// Created by kangdonguk on 2020/06/25.
//

// https://www.acmicpc.net/problem/6679
// 싱기한 네자리 숫자

#include <stdio.h>

int f(int n, int k) {
    int p = 0;
    while (n) {
        p += n % k;
        n /= k;
    }

    return p;
}

int main() {
    int a, b, c;
    for (int i = 1000; i < 10000; i++) {
        a = f(i, 10);
        b = f(i, 12);
        c = f(i, 16);
        if (a == b and b == c)
            printf("%d\n", i);
    }
}