//
// Created by kangdonguk on 2020/03/03.
//

// https://www.acmicpc.net/problem/10872
// 팩토리얼

#include <stdio.h>

long long int fac(int n) {
    if (n == 0)
        return 1;
    if (n < 3)
        return n;

    return n * fac(n-1);
}


int main() {
    int n;

    scanf("%d", &n);
    printf("%lld", fac(n));

    return 0;
}