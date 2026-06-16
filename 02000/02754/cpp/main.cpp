//
// Created by kangdonguk on 2020/06/04.
//

// https://www.acmicpc.net/problem/2754
// 학점계산

#include <stdio.h>

int main() {
    char s[3];

    scanf("%s", s);
    printf("%.1f", s[1] ? 4.3 - (s[0] - 'A') - (s[1] == '0' ? 0.3 : s[1] == '-' ? 0.6 : 0) : 0);
}