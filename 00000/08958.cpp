//
// Created by kangdonguk on 2020/02/27.
//

// https://www.acmicpc.net/problem/8958
// OX퀴즈

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    char c[81];
    for (int i=0; i<n; i++) {
        int sum = 0, o = 0;
        scanf("%s", c);
        for (int j=0; c[j]; j++)
            if (c[j] == 'X')
                o = 0;
            else {
                o += 1;
                sum += o;
            }

        printf("%d\n", sum);
    }

    return 0;
}
