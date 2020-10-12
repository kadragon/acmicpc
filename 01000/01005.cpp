// https://www.acmicpc.net/problem/1005
// ACM Craft

#include <cstdio>
#include <queue>
#include <vector>

void solve() {
    int n, k, x, y, end;
    int c[1001], de[1001] = {0}, ans[1001] = {0};
    std::queue<int> q;
    std::vector<int> v[1001];

    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++)
        scanf("%d", c + i);

    while (k--) {
        scanf("%d %d", &x, &y);
        de[y]++, v[x].push_back(y);
    }

    for (int i = 1; i <= n; i++)
        if (!de[i])
            q.push(i), ans[i] = c[i];

    scanf("%d", &end);

    while (!q.empty()) {
        int h = q.front(), p;
        q.pop();

        if (h == end) {
            printf("%d\n", ans[h]);
            break;
        }

        for (int i = 0; i < (int)v[h].size(); i++) {
            p = v[h][i];
            if (ans[p] < ans[h] + c[p])
                ans[p] = ans[h] + c[p];
            if (!--de[p])
                q.push(p);
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--)
        solve();
}
