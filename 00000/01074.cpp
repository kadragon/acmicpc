//
// Created by kangdonguk on 2020/03/23.
//

// https://www.acmicpc.net/problem/1074
// Z

#include <stdio.h>
#include <math.h>

int d[2][2] = {{0, 1},
               {2, 3}};

int get_z(int N, int r, int c) {
    if (N == 1 or (r < 2 and c < 2))
        return d[r][c];

    N--;
    int t = (int) pow(2, N);
    int next_r, next_c;
    next_r = r / t >= 1 ? r - t : r;
    next_c = c / t >= 1 ? c - t : c;

    return ((int) pow(4, N)) * (r / t * 2 + c / t) + get_z(N, next_r, next_c);
}

int main() {
    int N, r, c;

    scanf("%d %d %d", &N, &r, &c);
    printf("%d", get_z(N, r, c));
}
