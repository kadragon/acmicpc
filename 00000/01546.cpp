//
// Created by kangdonguk on 2020/02/27.
//

// https://www.acmicpc.net/problem/1546
// 평균

#include <stdio.h>

int main(void) {
    int n, max = 0, sum = 0, t;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &t);
        if (max < t)
            max = t;
        sum += t;
    }
    printf("%.3f", ((float)(sum)/max*100)/n);

    return 0;
}
