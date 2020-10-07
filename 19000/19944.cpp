// https://www.acmicpc.net/problem/19944
// 뉴비의 기준은 뭘까?

#include <cstdio>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%s", m <= 2 ? "NEWBIE!" : n >= m ? "OLDBIE!" : "TLE!");
}
