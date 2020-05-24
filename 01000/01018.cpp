//
// Created by kangdonguk on 2020/03/04.
//

// https://www.acmicpc.net/problem/1018
// 체스판 다시 칠하기

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    char arr[n][m+1];

    int ans = n*m;

    for (int i = 0; i < n; i++)
        scanf("%s", arr[i]);

    for (int i = 0; i <= n - 8; i++)
        for (int j = 0; j <= m - 8; j++) {
            int c = 0;
            char s = arr[i][j];

            for (int k = i; k < i + 8; k++) {
                for (int l = j; l < j + 8; l++) {
                    if ((k-i + l-j)%2 == 0 and s != arr[k][l])
                        c++;
                    else if((k-i + l-j)%2 == 1 and s == arr[k][l])
                        c++;
                }
            }
            c = c < 8*8 - c ? c : 8*8 - c;
            ans = c < ans ? c : ans;
        }

    printf("%d", ans);

    return 0;
}