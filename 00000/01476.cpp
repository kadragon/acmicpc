//
// Created by kangdonguk on 2020/04/24.
//

// https://www.acmicpc.net/problem/1476
// 날짜 계산

#include <cstdio>

int main() {
    int a[3], b[3] = {15, 28, 19}, k = 0, ans = 0;
    scanf("%d %d %d", &a[0], &a[1], &a[2]);

    while (ans < 3) {
        ans = 0, k++;
        for (int i = 0; i < 3; i++)
            if (k % b[i] == a[i] or (k % b[i] == 0 and a[i] == b[i]))
                ans++;
            else
                break;
    }
    printf("%d", k);
}