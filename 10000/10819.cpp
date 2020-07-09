// https://www.acmicpc.net/problem/10819
// 차이를 최대로

#include <cstdio>
#include <vector>

using namespace std;

int abs(int k) {
    return k < -1 ? k * -1 : k;
}

int d[8], n, a = 0, k[8], u[8];

void f(int p) {
    if (p == n) {
        int s = 0;
        for (int i = 0; i < n - 1; i++) {
            s += abs(d[k[i]] - d[k[i + 1]]);
        }
        a = s > a ? s : a;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (!u[i]) {
            k[p] = i, u[i] = 1;
            f(p + 1);
            u[i] = 0;
        }
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", d + i);

    f(0);

    printf("%d", a);
}