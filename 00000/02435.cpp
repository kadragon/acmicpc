//
// Created by kangdonguk on 2020/03/24.
//

// https://www.acmicpc.net/problem/2435
// 기상청 인턴 신현수

#include <stdio.h>

int arr[101];

int main() {
    int n, k, t, max = -10001;
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        scanf("%d", &t);
        for (int j = 0; j < k; j++)
            if (i + j < 101)
                arr[i + j] += t;
    }

    for (int i = k-1; i < n; i++)
        max = max < arr[i] ? arr[i] : max;

    printf("%d", max);
}