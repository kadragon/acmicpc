//
// Created by kangdonguk on 2020/07/02.
//

// https://www.acmicpc.net/problem/16916
// 부분 문자열

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000001], p[1000001];
    scanf("%s %s", s, p);

    char *t = strstr(s, p);
    printf("%d", t != nullptr ? 1 : 0);
}