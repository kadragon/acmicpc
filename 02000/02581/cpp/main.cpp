//
// Created by kangdonguk on 2020/03/02.
//

// https://www.acmicpc.net/problem/2581
// 소수

#include <stdio.h>

int prime[10001] = {1, 1, 0};

void prime_finder(int max) {
    for (int i = 3; i <= max; i = i + 2)
        if (prime[i] == 0)
            for (int j = 3; i * j <= max; j = j + 2)
                prime[i * j] = 1;
}

bool prime_check(int a) {
    if ((a != 2 and a%2 == 0) or prime[a] == 1)
        return false;
    if (a == 2 or prime[a] == 0)
        return true;
}

int main(void) {
    int m, n, min = -1, sum = 0;
    scanf("%d %d", &m, &n);
    prime_finder(n);

    for (int i = m; i<= n; i++)
        if (prime_check(i)) {
            min = min == -1 ? i : min;
            sum += i;
        }

    if (min != -1)
        printf("%d\n%d", sum, min);
    else
        printf("%d", -1);
}