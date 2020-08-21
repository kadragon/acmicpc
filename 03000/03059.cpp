// https://www.acmicpc.net/problem/3059
// 등장하지 않는 문자의 합

#include <cstdio>

int main() {
    int t, sum, a[91] = {0};
    char s[1001];
    scanf("%d", &t);
    while (t--) {
        sum = 2015;
        scanf("%s", s);
        for (int i = 0; s[i]; i++)
            a[(int)s[i]] = 1;
        for (int i = 65; i < 91; i++)
            if (a[i] != 0) {
                sum -= i;
                a[i] = 0;
            }

        printf("%d\n", sum);
    }
}
