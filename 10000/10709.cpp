//
// Created by kangdonguk on 2020/05/13.
//

// https://www.acmicpc.net/problem/10709
// 기상캐스터

#include <stdio.h>

int main() {
    char s[101];
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++, printf("\n")) {
        scanf("%s", s);

        for (int j = 0, t = -1; j < m; j++) {
            if (s[j] == 'c')
                t = 0;

            printf("%d ", t > -1 ? t++ : t);
        }
    }
}