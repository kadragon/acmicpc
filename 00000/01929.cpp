//
// Created by kangdonguk on 2020/03/03.
//

// https://www.acmicpc.net/problem/1929
// 소수 구하기

#include <stdio.h>

int prime[1000001] = {1, 1, 0};

void prime_finder(int max) {
    for (int i = 3; i <= max; i = i + 2)
        if (prime[i] == 0)
            for (int j = 3; i * j <= max; j = j + 2)
                prime[i * j] = 1;
}

int main(void) {
    int m, n;
    scanf("%d %d", &m, &n);
    prime_finder(n);

    for (int i = m; i <= n; i++) {
        if (i == 2 or (i%2 != 0 and prime[i] == 0))
            printf("%d\n", i);

        if (i > 2 and i % 2 == 1)
            i++;
    }

    return 0;
}