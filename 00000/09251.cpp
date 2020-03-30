//
// Created by kangdonguk on 2020/03/29.
//

// https://www.acmicpc.net/problem/9251
// LCS

#define max(a, b) ((a) > (b) ? (a) : (b))

#include <stdio.h>
#include <string.h>

char a[1005], b[1005];
int ans[1005][1005];

int lcs(int i, int j) {
    if (i < 0 || j < 0)
        return 0;

    if (ans[i][j] != -1)
        return ans[i][j];

    if (a[i] == b[j])
        return ans[i][j] = lcs(i - 1, j - 1) + 1;

    return ans[i][j] = max(lcs(i - 1, j), lcs(i, j - 1));
}

int main() {
    scanf("%s", a);
    scanf("%s", b);

    memset(ans, -1, sizeof(ans));

    printf("%d\n", lcs(strlen(a) - 1, strlen(b) - 1));
}

/*
 * Memorization 할때, 0으로 초기화 하는 것에 대해 주의!
 * https://www.acmicpc.net/board/view/49017
 */