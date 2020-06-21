//
// Created by kangdonguk on 2020/06/21.
//

#include <stdio.h>

int main() {
    char s[5];
    int i, a, b[] = {5, 3, 4, 4, 4, 4, 4, 4, 4, 4};
    while (true) {
        scanf("%s", s);
        if (s[0] == '0') break;

        for (i = 0, a = 1; s[i]; i++)
            a += b[s[i] - '0'];

        printf("%d\n", a);
    }
}