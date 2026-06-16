// https://www.acmicpc.net/problem/2529
// 부등호

#include <algorithm>
#include <cstdio>
#include <deque>
#include <vector>

bool compare(int a, int b) {
    return a > b;
}

int main() {
    int k, t, de[10] = {0}, dd[10] = {0}, anp[10], ans[10];
    char c;
    std::vector<int> v[10];
    std::deque<int> q;

    scanf("%d\n", &k);
    for (int i = 0; i < k; i++) {
        scanf("%c ", &c);
        if (c == '<')
            dd[i + 1]++, de[i + 1]++, v[i].push_back(i + 1);
        else
            dd[i]++, de[i]++, v[i + 1].push_back(i);
    }

    for (int i = k; i >= 0; i--)
        if (!dd[i])
            q.push_back(i);

    t = 9 - k;
    while (!q.empty()) {
        std::sort(q.begin(), q.end(), compare);
        int h = q[0];
        q.pop_front();
        anp[h] = t++;

        for (int i = 0; i < (int)v[h].size(); i++)
            if (!--dd[v[h][i]])
                q.push_back(v[h][i]);
    }

    for (int i = 0; i <= k; i++)
        if (!de[i])
            q.push_back(i);

    t = 0;
    while (!q.empty()) {
        std::sort(q.begin(), q.end());
        int h = q[0];
        q.pop_front();
        ans[h] = t++;

        for (int i = 0; i < (int)v[h].size(); i++)
            if (!--de[v[h][i]])
                q.push_back(v[h][i]);
    }

    for (int i = 0; i <= k; i++)
        printf("%d", anp[i]);
    printf("\n");
    for (int i = 0; i <= k; i++)
        printf("%d", ans[i]);
}
