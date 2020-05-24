//
// Created by kangdonguk on 2020/05/24.
//

#include <stdio.h>

int main() {
    char s[101];
    int t = 0, a = 0;
    scanf("%s", s);

    for (int i = 0; s[i]; i++) {
        if (s[i] == ',')
            a += t, t = 0;
        else
            t = t * 10 + s[i] - '0';
    }

    printf("%d", a + t);
}