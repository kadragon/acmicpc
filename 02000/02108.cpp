//
// Created by kangdonguk on 2020/03/06.
//

// https://www.acmicpc.net/problem/2108
// 통계학

#include <stdio.h>
#include <math.h>

int a[8001];

int main() {
    int n, t;
    int sum = 0, max_i = 0, min = 4001, max = -4001;
    int pre_ans = -1, mid_ans = -1, mid = 0;
    bool flag = true;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &t);
        a[t + 4000]++;
        sum += t;

        max_i = max_i < a[t + 4000] ? a[t + 4000] : max_i;
    }

    for (int i = 0; i < 8001; i++) {
        if (a[i]) {
            if (min == 4001)
                min = i - 4000;

            if (max_i == a[i] and flag) {
                if (pre_ans != -1)
                    flag = false;

                pre_ans = i - 4000;
            }

            mid += a[i];
            if (mid > n / 2 and mid_ans == -1)
                mid_ans = i - 4000;

            if (mid == n) {
                max = i - 4000;
                break;
            }
        }
    }

    // 실수형일 경우 -0이 출력될 가능성이 존재한다.
    printf("%d\n", (int) (floor((double) sum / n + 0.5)));
    printf("%d\n", mid_ans);
    printf("%d\n", pre_ans);
    printf("%d", max - min);

    return 0;
}
