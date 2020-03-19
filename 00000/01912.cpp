//
// Created by kangdonguk on 2020/03/18.
//

// https://www.acmicpc.net/problem/1912
// 연속합

#include <stdio.h>

int arr[100001];

int main() {
    int n, h = 0, t = 0, tmp = 0, ans = -1000, hTmp;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    while (t < n) {
        tmp += arr[t];
        hTmp = tmp;

        for (int i = h; i < t; i++) {
            hTmp -= arr[i];
            if (hTmp > tmp) {
                h = i + 1;
                tmp = hTmp;
            }
        }
        if (ans < tmp)
            ans = tmp;
        t++;
    }
    printf("%d", ans);
}