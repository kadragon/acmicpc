//
// Created by kangdonguk on 2020/03/28.
//

// https://www.acmicpc.net/problem/1076
// 저항

#include <stdio.h>

int main() {
    long long int p[3], v[10], k = 1;
    for (int i = 0; i < 10; i++) {
        v[i] = k;
        k *= 10;
    }

    char s[7], d[] = "bbroygbvgw";

    for (int i = 0; i < 3; i++) {
        scanf("%s", s);
        if (s[0] == 'b')
            p[i] = s[1] == 'l' ? s[2] == 'a' ? 0 : 6 : 1;
        else if (s[0] == 'g')
            p[i] = s[3] == 'y' ? 8 : 5;
        else
            for (int j = 2; j < 10; j++)
                if (s[0] == d[j]) {
                    p[i] = j;
                    break;
                }
    }

    printf("%lld", (p[0] * 10 + p[1]) * v[p[2]]);
}