//
// Created by kangdonguk on 2020/05/12.
//

#include <stdio.h>

int n, a, b, c;

int main() {
    scanf("%d %d %d", &n, &a, &b);
    while (a != b) {
        a = ++a / 2;
        b = ++b / 2;
        c++;
    }

    printf("%d", c);
}
