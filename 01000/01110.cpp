//
// Created by kangdonguk on 2020/02/27.
//

// https://www.acmicpc.net/problem/1110
// 더하기 사이클

#include <stdio.h>

int main() {
    int a, c = 0, t = -1;
    int i, j;
    scanf("%d", &a);
    t = a;

    while(true) {
        i = t/10;
        j = t%10;
        t = (i+j)%10 + j*10;
        c++;

        if (a == t)
            break;
    }
    printf("%d", c);
}
