// https://www.acmicpc.net/problem/13904
// 과제

#include <algorithm>
#include <cstdio>
#include <vector>

typedef struct {
    int d, w;
} quest;

std::vector<quest> vt;
int n, d[1001], max_d, ans;

bool compare(quest a, quest b) {
    return a.w > b.w;
}

void input() {
    scanf("%d", &n);
    int d, w;
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &d, &w);
        vt.push_back({d, w});

        if (max_d < d)
            max_d = d;
    }

    std::sort(vt.begin(), vt.end(), compare);
}

void solve() {
    for (int i = 0; i < n; i++)
        if (!d[vt[i].d])
            d[vt[i].d] = vt[i].w;
        else {
            int j = vt[i].d;
            while (j > 0) {
                if (!d[j]) {
                    d[j] = vt[i].w;
                    break;
                }
                j--;
            }
        }
}

void output() {
    for (int i = 1; i <= max_d; i++)
        ans += d[i];

    printf("%d", ans);
}

int main() {
    input();
    solve();
    output();
}
