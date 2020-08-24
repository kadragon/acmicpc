// https://www.acmicpc.net/problem/1759
// 암호 만들기

#include <algorithm>
#include <cstdio>

int l, c, visited[16], cp[16];
char s[16], ch[] = "aeiou", m[16];

void f(int p, int st, int cu) {
    if (p == l) {
        if (cu >= 1 and l - cu >= 2) {
            m[p] = '\0';
            printf("%s\n", m);
        }
        return;
    }
    for (int i = st; i < c; i++) {
        if (!visited[i]) {
            m[p] = s[i];
            visited[i] = 1;
            f(p + 1, i + 1, cu + cp[i]);
            visited[i] = 0;
        }
    }
}

int main() {
    scanf("%d %d\n", &l, &c);
    for (int i = 0; i < c; i++)
        scanf("%1c ", &s[i]);
    std::sort(s, s + c);

    for (int i = 0; i < c; i++)
        for (int j = 0; ch[j]; j++)
            if (s[i] == ch[j]) {
                cp[i] = 1;
                break;
            }

    f(0, 0, 0);
}