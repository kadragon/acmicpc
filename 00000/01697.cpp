//
// Created by kangdonguk on 2020/04/08.
//

// https://www.acmicpc.net/problem/1697
// 숨바꼭질

#include <stdio.h>

int v[100001], a[300001][2], k, n, t;

int main() {
    scanf("%d %d", &n, &k);

    if (k <= n) {
        printf("%d", n-k);
        return 0;
    }

    a[0][0] = 1, a[0][1] = n, t++;

    for (int i = 0; v[k] == 0; i++) {
        if (v[a[i][1]] == 0) {
            v[a[i][1]] = a[i][0];

            int q[3] = {a[i][1] - 1, a[i][1] + 1, a[i][1] * 2};
            for (int j = 0; j < 3; j++)
                if (q[j] > -1 && q[j] < 100001 && v[q[j]] == 0) {
                    a[t][0] = a[i][0] + 1;
                    a[t][1] = q[j];
                    t++;
                }
        }
    }

    printf("%d", v[k]-1);
}