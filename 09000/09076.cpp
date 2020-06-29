//
// Created by kangdonguk on 2020/06/29.
//

#include <stdio.h>
#include <algorithm>

int main() {
    int a[5], t, i;
    scanf("%d", &t);
    while (t--) {
        for (i = 0; i < 5; i++)
            scanf("%d", a + i);

        std::sort(a, a + 5);

        if (a[3] - a[1] > 3)
            printf("%s\n", "KIN");
        else
            printf("%d\n", a[1] + a[2] + a[3]);
    }
}