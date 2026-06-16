//
// Created by kangdonguk on 2020/06/08.
//

// https://www.acmicpc.net/problem/11109
// 괴짜 교수

#include <stdio.h>

int main() {
    int t, d, n, s, p;
    char v[][19] = {"do not parallelize", "does not matter", "parallelize"};
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d %d %d", &d, &n, &s, &p);
        s = s * n, p = d + n * p;
        printf("%s\n", s == p ? v[1] : s < p ? v[0] : v[2]);
    }
}
