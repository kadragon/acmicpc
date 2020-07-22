// https://www.acmicpc.net/problem/14487
// 욱제는 효도쟁이야!!

#include <cstdio>

int main() {
    int n, a = 0, t, m = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &t);
        a += t;
        if (t > m)
            m = t;
    }
    printf("%d", a - m);
}
