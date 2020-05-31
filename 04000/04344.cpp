//
// Created by kangdonguk on 2020/02/27.
//

// https://www.acmicpc.net/problem/4344
// 평균은 넘겠지

#include <stdio.h>

int main(void) {
    int n, k;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &k);
        int t[k], sum = 0, cnt = 0;
        float avg;
        for (int j = 0; j < k; j++) {
            scanf("%d", &t[j]);
            sum += t[j];
        }
        avg = (float) sum / k;

        for (int j = 0; j < k; j++)
            if ((float) t[j] > avg)
                cnt += 1;

        printf("%.3f%%\n", (float) cnt / k * 100);
    }

    return 0;
}
