//
// Created by kangdonguk on 2020/03/04.
//

// https://www.acmicpc.net/problem/11729
// 하노이 탑 이동 순서

#include <stdio.h>
#include <math.h>

void hanoi(int a, int b, int c, int n) {
    if (n == 1)
        printf("%d %d\n", a, c);
    else {
        hanoi(a, c, b, n-1);
        printf("%d %d\n", a, c);
        hanoi(b, a, c, n-1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", (int)pow(2, n)-1);
    hanoi(1, 2, 3, n);
}
