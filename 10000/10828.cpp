//
// Created by kangdonguk on 2020/03/20.
//

// https://www.acmicpc.net/problem/10828
// 스택

/*
 * push X: 정수 X를 스택에 넣는 연산이다.
 * pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
 * size: 스택에 들어있는 정수의 개수를 출력한다.
 * empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
 * top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
 */

#include <stdio.h>
#include <string.h>

int stack[10001], p = -1;

int main() {
    int n, t;
    scanf("%d", &n);

    char f[6];

    while(n--) {
        scanf("%s", f);
        if (!strcmp(f, "push")) {
            scanf("%d", &t);
            stack[++p] = t;
        }
        else if(!strcmp(f, "pop"))
            printf("%d\n", p == -1 ? -1 : stack[p--]);
        else if (!strcmp(f, "size"))
            printf("%d\n", p+1);
        else if (!strcmp(f, "empty"))
            printf("%d\n", p == -1 ? 1 : 0);
        else if (!strcmp(f, "top"))
            printf("%d\n", p == -1 ? -1 : stack[p]);
    }

    return 0;
}