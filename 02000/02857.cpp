// https://www.acmicpc.net/problem/2857
// FBI

#include <cstdio>
#include <string.h>
#include <vector>

char s[5][12];
std::vector<int> d;

void input() {
    for (int i = 0; i < 5; i++)
        scanf("%s", s[i]);
}

void solve() {
    for (int i = 0; i < 5; i++)
        for (int j = 2; j < strlen(s[i]); j++)
            if (s[i][j - 2] == 'F' and s[i][j - 1] == 'B' and s[i][j] == 'I') {
                d.push_back(i);
                break;
            }
}

void output() {
    if (!d.size())
        printf("HE GOT AWAY!");
    else
        for (int i = 0; i < (int)d.size(); i++)
            printf("%d ", d[i] + 1);
}

int main() {
    input();
    solve();
    output();
}
