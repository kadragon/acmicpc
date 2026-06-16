// https://www.acmicpc.net/problem/10178
// 할로윈의 사탕

#include <cstdio>

int main() {
    int t, a, b;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &a, &b);
        printf("You get %d piece(s) and your dad gets %d piece(s).\n", a / b, a % b);
    }
}
