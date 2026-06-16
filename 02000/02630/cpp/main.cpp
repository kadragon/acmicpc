//
// Created by kangdonguk on 2020/03/24.
//

// https://www.acmicpc.net/problem/2630
// 색종이 만들기

#include <stdio.h>

int arr[129][129];
int ans[2];

void check(int x, int y, int k) {
    if (k == 1) {
        ans[arr[x][y]]++;
        return;
    }

    int c = arr[x][y];
    for (int i = x; i < x + k; i++)
        for (int j = y; j < y + k; j++)
            if (c != arr[i][j]) {
                check(x, y, k / 2);
                check(x + k / 2, y, k / 2);
                check(x, y + k / 2, k / 2);
                check(x + k / 2, y + k / 2, k / 2);
                return;
            }
    ans[c]++;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    check(0, 0, n);

    printf("%d\n%d", ans[0], ans[1]);
}