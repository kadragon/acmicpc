//
// Created by kangdonguk on 2020/05/21.
//

// https://www.acmicpc.net/problem/17094
// Serious Problem

#include <stdio.h>

int main() {
    int l, a = 0, b = 0;
    char s[100001];
    scanf("%d %s", &l, s);

    for (int i = 0; s[i]; i++) {
        if (s[i] == '2') a++;
        else b++;
        if (a > l / 2 or b > l / 2)
            break;
    }

    printf("%s", a == b ? "yee" : a > b ? "2" : "e");
}