// https://www.acmicpc.net/problem/4880
// 다음수

#include <cstdio>

int main() {
    int a, b, c;
    while (true) {
        scanf("%d %d %d", &a, &b, &c);
        if (!a and !b and !c)
            break;
        if (b - a == c - b)
            printf("AP %d\n", c + c - b);
        else
            printf("GP %d\n", c * (c / b));
    }
}