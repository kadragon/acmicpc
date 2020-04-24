//
// Created by kangdonguk on 2020/04/24.
//

// https://www.acmicpc.net/problem/1924
// 2007년 분류

#include <cstdio>

int main() {
    int m, d, c = 0;
    scanf("%d %d", &m, &d);

    int cm[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char ch[7][4] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    for (int i = 0; i < m; i++)
        c += cm[i];

    c += d;

    printf("%s", ch[c % 7]);
}