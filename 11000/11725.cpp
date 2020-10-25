// https://www.acmicpc.net/problem/11725
// 트리의 부모 찾기

#include <cstdio>
#include <queue>
#include <vector>

std::vector<int> v[100001];
std::queue<int> q;
int n, pre[100001], visited[100001];

int main() {
    scanf("%d", &n);
    int x, y;
    for (int i = 1; i < n; i++) {
        scanf("%d %d", &x, &y);
        v[x].push_back(y);
        v[y].push_back(x);
    }

    q.push(1);

    while (!q.empty()) {
        int h = q.front();
        q.pop();

        if (visited[h])
            continue;

        visited[h] = 1;

        for (int i = 0; i < (int)v[h].size(); i++) {
            if (!visited[v[h][i]]) {
                pre[v[h][i]] = h;
                q.push(v[h][i]);
            }
        }
    }

    for (int i = 2; i <= n; i++)
        printf("%d\n", pre[i]);
}
