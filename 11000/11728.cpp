//
// Created by kangdonguk on 2020/05/06.
//

#include <cstdio>

int main() {
    int a[1000000], b[1000000], n, m, x = 0, y = 0;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
        scanf("%d", a + i);

    for (int i = 0; i < m; i++)
        scanf("%d", b + i);

    while (x < n or y < m)
        printf("%d ", x == n ? b[y++] : y == m ? a[x++] : a[x] < b[y] ? a[x++] : b[y++]);
}