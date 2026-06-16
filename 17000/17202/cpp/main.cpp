 

// https://www.acmicpc.net/problem/17202
// 핸드폰 번호 궁합

#include <cstdio>

int main() {
    int c[16];
    char a[9], b[9];
    scanf("%s %s", a, b);
    
    for (int i = 0, j = 0; i < 8; i++) {
        c[j++] = a[i] - '0';
        c[j++] = b[i] - '0';
    }

    for (int i = 15; i > 1; i--)
        for (int j = 0; j < i; j++)
            c[j] = (c[j] + c[j + 1]) % 10;
    
    printf("%d%d", c[0], c[1]);
}
