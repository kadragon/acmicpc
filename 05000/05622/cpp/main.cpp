//
// Created by kangdonguk on 2020/03/01.
//

// https://www.acmicpc.net/problem/5622
// 다이얼

#include <stdio.h>

int a[26], in, sum;

int main(void) {
    for (int i = 2; i <= 9; i++) {
        int c = i == 7 or i == 9 ? 4 : 3;
        for (; c > 0; c--)
            a[in++] = i;
    }

    char s[16];
    scanf("%s", s);

    for(int i=0; s[i]; i++)
        sum += a[s[i]-65]+1;

    printf("%d", sum);

    return 0;
}