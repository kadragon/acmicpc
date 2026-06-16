// https://www.acmicpc.net/problem/2959
// 거북이

#include <algorithm>
#include <cstdio>

int main() {
    int a[4];
    scanf("%d %d %d %d", a, a + 1, a + 2, a + 3);
    std::sort(a, a + 4);
    printf("%d", a[2] * a[0]);
}