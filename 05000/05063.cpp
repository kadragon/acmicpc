//
// Created by kangdonguk on 2020/05/14.
//

#include <stdio.h>

int main() {
    int n, a, b, c, d;
    char s[3][20] = {"advertise", "do not advertise", "does not matter"};
    scanf("%d", &n);

    while (n--) {
        scanf("%d %d %d", &a, &b, &c);
        d = b - c;
        if (a < d) d = 0;
        else if (a == d) d = 2;
        else d = 1;

        printf("%s\n", s[d]);
    }
}