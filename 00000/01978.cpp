//
// Created by kangdonguk on 2020/03/02.
//

// https://www.acmicpc.net/problem/1978
// 소수 찾기

#include <stdio.h>

int prime[1001];

int main(void) {
    int n, cnt = 0;
    scanf("%d", &n);

    int arr[n], max = -1;
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        max = max > arr[i] ? max : arr[i];
    }

    prime[1] = 1;

    for(int i=2; i<=max; i++)
        if (prime[i] == 0)
            for(int j=2; i*j<=max; j++)
                prime[i*j] = 1;

    for(int i=0; i<n; i++)
        if (prime[arr[i]] == 0)
            cnt++;

    printf("%d", cnt);
}