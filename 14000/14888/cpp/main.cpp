// https://www.acmicpc.net/problem/14888
// 연산자 끼워넣기

#include <cstdio>

int n, a[12], o[5], max = -1000000001, min = 1000000001;

void input() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", a + i);
    for (int i = 1; i <= 4; i++)
        scanf("%d", o + i);
}

void f(int s, int k) {
    if (s == n) {
        if (k > max)
            max = k;
        if (k < min)
            min = k;
        return;
    }
    for (int i = 1; i <= 4; i++) {
        if (o[i]) {
            o[i]--;
            if (i == 1)
                f(s + 1, k + a[s + 1]);
            else if (i == 2)
                f(s + 1, k - a[s + 1]);
            else if (i == 3)
                f(s + 1, k * a[s + 1]);
            else
                f(s + 1, k / a[s + 1]);
            o[i]++;
        }
    }
}

int main() {
    input();
    f(1, a[1]);
    printf("%d\n%d", max, min);
}
