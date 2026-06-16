//
// Created by kangdonguk on 2020/03/02.
//

// https://www.acmicpc.net/problem/2775
// 부녀회장이 될테야

/*
 *   0      1  2  3  4  5  6
 *   1      1  3  6 10 15 21
 *   2      1  4 10 20 35 56
 *   3      1  5 15 35 70
 */

#include <stdio.h>

int arr[15][15];

int ans(int k, int n) {
    if (arr[k][n])
        return arr[k][n];
    if (k == 0)
        return n;
    if (n == 1)
        return 1;

    return arr[k][n] = ans(k-1, n) + ans(k, n-1);
}

int main(void) {
    int a;
    int k, n;
    scanf("%d", &a);

    while (a--) {
        scanf("%d\n%d", &k, &n);
        printf("%d\n", ans(k, n));
    }
}