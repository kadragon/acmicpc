//
// Created by kangdonguk on 2020/03/04.
//

// https://www.acmicpc.net/problem/7568
// 분해합

#include <stdio.h>

struct p {
    int k;
    int c;
};

int main() {
    int n;
    scanf("%d", &n);

    p a[n];
    int ans[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a[i].k, &a[i].c);
        ans[i] = 1;

        for (int j = 0; j < i; j++)
            if (a[i].k < a[j].k and a[i].c < a[j].c)
                ans[i]++;
            else if (a[i].k > a[j].k and a[i].c > a[j].c)
                ans[j]++;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", ans[i]);

    return 0;
}
