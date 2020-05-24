//
// Created by kangdonguk on 2020/05/24.
//

// https://www.acmicpc.net/problem/5586
// JOI와 IOI

#include <stdio.h>

int main() {
    char s[10001];
    int j = 0, i = 0, t;

    scanf("%s", s);

    for (t = 0; s[t + 2]; t++)
        if (s[t + 1] == 'O' and s[t + 2] == 'I')
            if (s[t] == 'J') j++;
            else if (s[t] == 'I') i++;

    printf("%d\n%d", j, i);
}
