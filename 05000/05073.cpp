// https://www.acmicpc.net/problem/5073
// 삼각형과 세 변

#include <cstdio>

int main() {
    int a, b, c, e;
    char s[][12] = {"Equilateral", "Isosceles", "Scalene", "Invalid"};
    while (true) {
        scanf("%d %d %d", &a, &b, &c);
        if (!(a && b && c))
            break;

        e = (a >= b + c || b >= a + c || c >= a + b) ? 3 : (a == b && b == c) ? 0 : (a == b || b == c || c == a) ? 1 : 2;

        printf("%s\n", s[e]);
    }
}