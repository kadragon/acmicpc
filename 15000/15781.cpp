//
// Created by kangdonguk on 2020/06/07.
//

#include <stdio.h>

int main() {
    int n, m, t, a = 0, b = 0;
    scanf("%d %d", &n, &m);
    while (n--) {
        scanf("%d", &t);
        if (t > a) a = t;
    }
    while (m--) {
        scanf("%d", &t);
        if (t > b) b = t;
    }
    printf("%d", a + b);
}
