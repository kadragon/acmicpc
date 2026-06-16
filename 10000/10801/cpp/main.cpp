//
// Created by kangdonguk on 2020/05/30.
//

// https://www.acmicpc.net/problem/10801
// 카드게임

#include <stdio.h>

int main() {
    int a[10], b[10], x = 0, y = 0, i;
    for (i = 0; i < 10; i++)
        scanf("%d", a + i);

    for (i = 0; i < 10; i++) {
        scanf("%d", b + i);
        if (a[i] > b[i]) x++;
        else if (a[i] < b[i]) y++;
    }

    printf("%c", x == y ? 'D' : x > y ? 'A' : 'B');
}
