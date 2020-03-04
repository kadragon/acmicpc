//
// Created by kangdonguk on 2020/02/28.
//

// https://www.acmicpc.net/problem/4673
// 셀프 넘버

#include <stdio.h>

int answer[10001];

void d(int n) {
    int sum = n;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    if (sum <= 10000 and answer[sum] == 0) {
        answer[sum] = 1;
        d(sum);
    }
}


int main(void) {
    for (int i = 1; i < 10001; i++) {
        if (answer[i] == 0) {
            printf("%d\n", i);
            d(i);
        }
    }

    return 0;
}
