// https://www.acmicpc.net/problem/17265
// 나의 인생에는 수학과 함께

#include <cstdio>
#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))
#define INF 987654321;

int n;
char d[7][7], t[10];
int a[7][7], b[7][7];

void input() {
    scanf("%d\n", &n);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            scanf("%1c ", &d[i][j]);
}

int cal(int a, char o, char b) {
    int y = b - '0';
    switch (o) {
    case '+':
        return a + y;
    case '-':
        return a - y;
    case '*':
        return a * y;
    }
    return -1;
}

void solve() {
    int x, y, p, q;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            if (d[i][j] < '0')
                continue;
            if (i == 1 or j == 1) {
                if (i == 1 and j == 1)
                    a[i][j] = b[i][j] = d[i][j] - '0';
                else if (i == 1) {
                    a[i][j] = b[i][j] = cal(a[i][j - 2], d[i][j - 1], d[i][j]);
                } else if (j == 1) {
                    a[i][j] = b[i][j] = cal(a[i - 2][j], d[i - 1][j], d[i][j]);
                }
            } else {
                x = i - 2 > 0 ? cal(a[i - 2][j], d[i - 1][j], d[i][j]) : -INF;
                y = j - 2 > 0 ? cal(a[i][j - 2], d[i][j - 1], d[i][j]) : -INF;
                p = cal(a[i - 1][j - 1], d[i][j - 1], d[i][j]);
                q = cal(a[i - 1][j - 1], d[i - 1][j], d[i][j]);
                a[i][j] = max(max(max(x, y), p), q);

                x = i - 2 > 0 ? cal(b[i - 2][j], d[i - 1][j], d[i][j]) : INF;
                y = j - 2 > 0 ? cal(b[i][j - 2], d[i][j - 1], d[i][j]) : INF;
                p = cal(b[i - 1][j - 1], d[i][j - 1], d[i][j]);
                q = cal(b[i - 1][j - 1], d[i - 1][j], d[i][j]);
                b[i][j] = min(min(min(x, y), p), q);
            }
        }
}

void output() {
    printf("%d %d", a[n][n], b[n][n]);
}

int main() {
    input();
    solve();
    output();
}

/* 
[입력]
첫 번째 줄에는 지도의 크기 N이 주어진다. (3 ≤ N ≤ 5, N은 홀수) 
그 다음 N 줄에는 N개의 숫자 또는 연산자가 빈칸을 사이에 두고 주어지며, 세현이네 집 (1, 1)과 학교 (N, N)는 반드시 숫자로 주어진다.
그리고 숫자 다음에는 연산자, 연산자 다음에는 숫자가 나오도록 주어진다. 주어지는 숫자는 0이상 5이하의 정수, 연산자는 (‘+’, ‘-’, ‘*’) 만 주어진다.

[출력]
연산 결과의 최댓값과 최솟값을 하나의 공백을 두고 출력한다. 연산자 우선순위는 고려하지 않는다.

[결과]
127 3
*/