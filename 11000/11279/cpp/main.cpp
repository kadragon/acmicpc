// https://www.acmicpc.net/problem/11279
// 최대 힙

#include <cstdio>
#include <queue>

int main() {
    std::priority_queue<int> pq;
    int n, t, ans;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &t);
        if (t == 0) {
            if (pq.empty()) {
                ans = 0;
            } else {
                ans = pq.top();
                pq.pop();
            }
            printf("%d\n", ans);
        } else
            pq.push(t);
    }
}
