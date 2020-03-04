//
// Created by kangdonguk on 2020/03/04.
//

// https://www.acmicpc.net/problem/2798
// 블랙잭

#include <stdio.h>

int main() {
    int n, m, max = -1, c;
    scanf("%d %d", &n, &m);

    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n - 2 and arr[i] < m; i++)
        for (int j = i + 1; j < n - 1 and arr[j] < m; j++)
            for (int k = j + 1; k < n and arr[k] < m; k++) {
                c = arr[i] + arr[j] + arr[k];
                if (c == m) {
                    printf("%d", m);
                    return 0;
                }
                max = c > max and c < m ? c : max;
            }

    printf("%d", max);
}
