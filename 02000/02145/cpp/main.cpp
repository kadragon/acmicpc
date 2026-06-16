// https://www.acmicpc.net/problem/2145
// 숫자 놀이

#include <cstdio>

int solve(int t) {
    int a = 0;
    while (t) {
        a += t % 10;
        t /= 10;
    }
    return a >= 10 ? solve(a) : a;
}

int main() {
    int t;
    while (true) {
        scanf("%d", &t);
        if (!t)
            break;

        printf("%d\n", solve(t));
    }
}
