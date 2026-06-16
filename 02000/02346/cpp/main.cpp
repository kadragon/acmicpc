// https://www.acmicpc.net/problem/2346
// 풍선 터뜨리기

#include <cstdio>
#include <deque>

std::deque<std::pair<int, int>> dq;

int main() {
    int n, t;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &t);
        dq.push_back({i, t});
    }

    while (!dq.empty()) {
        int h = dq.front().first;
        int c = dq.front().second;
        dq.pop_front();

        printf("%d ", h);

        if (c > 0) {
            while (--c) {
                dq.push_back({dq.front().first, dq.front().second});
                dq.pop_front();
            }
        } else {
            while (c++) {
                dq.push_front({dq.back().first, dq.back().second});
                dq.pop_back();
            }
        }
    }
}
