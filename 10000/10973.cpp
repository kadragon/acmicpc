// https://www.acmicpc.net/problem/10973
// 이전 순열

#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

vector<int> d;
int p[10001];

int main() {
    int n, t;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &t);
        d.push_back(t);
    }

    do {
        if (d.empty())
            break;
        t = d.back();
        p[t] = 1, d.pop_back();

        for (int i = t - 1; i > 0; i--) {
            if (p[i]) {
                d.push_back(i), p[i] = 0, t = 0;
                break;
            }
        }
    } while (t != 0);

    if ((int)d.size() == 0) {
        printf("%d", -1);
        return 0;
    }

    for (int i = n; (int)d.size() < n; i--) {
        if (p[i])
            d.push_back(i);
    }

    for (int i = 0; i < n; i++)
        printf("%d ", d[i]);
}

/**
 * http://www.cplusplus.com/reference/algorithm/prev_permutation/
 */