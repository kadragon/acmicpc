//
// Created by kangdonguk on 2020/03/19.
//

// https://www.acmicpc.net/problem/9012
// 괄호

#include <stdio.h>

bool vps(char s[51]) {
    int head = -1;
    for (int i = 0; s[i]; i++) {
        head += s[i] == '(' ? 1 : -1;
        if (head < -1)
            return false;
    }
    return head == -1;
}

int main() {
    int n;
    char s[51];

    scanf("%d", &n);

    while (n-- > 0) {
        scanf("%s", s);
        printf("%s\n", vps(s) ? "YES" : "NO");
    }
}