//
// Created by kangdonguk on 2020/05/13.
//

// https://www.acmicpc.net/problem/5576
// 콘테스트

#include <cstdio>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int t, p = 2;
    while (p--) {
        int a[3] = {0,}, c = 10;

        while (c--) {
            scanf("%d", &t);
            for (int j = 0; j < 3; j++)
                if (t > a[j])
                    swap(&t, &a[j]);
        }

        printf("%d ", a[0] + a[1] + a[2]);
    }
}