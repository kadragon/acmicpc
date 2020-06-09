//
// Created by kangdonguk on 2020/06/10.
//

// https://www.acmicpc.net/problem/14581
// 팬들에게 둘러싸인 홍준

#include <stdio.h>

int main() {
    char s[21], t[] = "fan";
    scanf("%s", s);

    for (int i = 0; i < 3; i++, printf("\n"))
        for (int j = 0; j < 3; j++)
            printf(":%s:", i == 1 and j == 1 ? s : t);
}