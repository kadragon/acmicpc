//
// Created by kangdonguk on 2020/03/03.
//

// https://www.acmicpc.net/problem/4948
// 베르트랑 공준

#include <stdio.h>

int prime[250001] = {1, 1, 0};
int check_max = 2;

void prime_finder(int max) {
    for (int i = 2; i <= check_max; i++)
        if (prime[i] == 0)
            for (int j = 2; i * j <= max;  j++)
                prime[i*j] = 1;

    for (int i = check_max; i <= max; i++) {
        if (prime[i] == 0)
            for (int j = 3; i * j <= max; j = j+2)
                prime[i*j] = 1;
    }

    check_max = max;
}

int main() {
    int n, c;

    while (scanf("%d", &n)) {
        if (n == 0)
            break;

        if (check_max < n*2)
            prime_finder(n*2);

        c = 0;

        for (int i = n+1; i <= n*2; i++)
            if (prime[i] == 0)
                c++;

        printf("%d\n", c);
    }

    return 0;
}