//
// Created by kangdonguk on 2020/02/28.
//

// https://www.acmicpc.net/problem/15596
// 정수 N개의 합

long long sum(int *a, int n) {
    long long int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];

    return sum;
}