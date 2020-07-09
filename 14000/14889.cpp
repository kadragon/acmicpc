// https://www.acmicpc.net/problem/14889
// 스타트와 링크

#include <climits>
#include <cstdio>
#include <vector>

using namespace std;

int d[21][21], n, t, s, ans = INT_MAX;
vector<int> start, link;

int abs(int k) {
    return k < 0 ? k * -1 : k;
}

void div(int k) {
    int start_s = (int)(start.size()), link_s = (int)(link.size());
    if (start_s > n / 2 or link_s > n / 2)
        return;
    if (k == n + 1) {
        if (start_s == n / 2 and link_s == n / 2) {
            int a = 0, b = 0, c;
            for (int i = 0; i < n / 2; i++) {
                for (int j = i + 1; j < n / 2; j++) {
                    a += d[start[i]][start[j]];
                    b += d[link[i]][link[j]];
                }
            }
            c = abs(a - b);
            ans = c < ans ? c : ans;
        }
        return;
    }

    start.push_back(k);
    div(k + 1);
    start.pop_back();

    link.push_back(k);
    div(k + 1);
    link.pop_back();
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            scanf("%d", &d[i][j]);
            if (j < i)
                d[j][i] += d[i][j];
        }

    div(1);

    printf("%d", ans);
}
