// https://www.acmicpc.net/problem/1991
// 트리 순회

#include <iostream>

using namespace std;

int t[26][2], n;

void p(int k, int type) {
    if (k == -1)
        return;
    if (type == 0)
        printf("%c", k + 'A');
    p(t[k][0], type);
    if (type == 1)
        printf("%c", k + 'A');
    p(t[k][1], type);
    if (type == 2)
        printf("%c", k + 'A');
}

int main() {
    char a, b, c;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        t[a - 'A'][0] = b != '.' ? b - 'A' : -1;
        t[a - 'A'][1] = c != '.' ? c - 'A' : -1;
    }

    for (int i = 0; i < 3; i++, printf("\n"))
        p(0, i);
}