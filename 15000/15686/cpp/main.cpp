// https://www.acmicpc.net/problem/15686
// 치킨 배달

#include <cstdio>
#include <math.h>
#include <vector>

std::vector<std::pair<int, int>> h, c;
std::vector<int> use;

int n, m, d[101][14], min = 5001;

void input() {
    scanf("%d %d", &n, &m);
    int t;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            scanf("%d", &t);
            if (t == 1)
                h.push_back({i, j});
            else if (t == 2)
                c.push_back({i, j});
        }
}

void cal_len() {
    for (int i = 0; i < (int)h.size(); i++)
        for (int j = 0; j < (int)c.size(); j++)
            d[i][j] = abs(h[i].first - c[j].first) + abs(h[i].second - c[j].second);
}

void cal_len_by_pick() {
    int t_min = 0;
    for (int i = 0; i < (int)h.size(); i++) {
        int p_min = 101;
        for (int j = 0; j < (int)c.size(); j++)
            for (int k = 0; k < (int)use.size(); k++)
                if (use[k] == j and p_min > d[i][j])
                    p_min = d[i][j];

        if (p_min != 101)
            t_min += p_min;
    }
    if (min > t_min)
        min = t_min;
}

void pick_c(int k) {
    if ((int)use.size() == m) {
        cal_len_by_pick();
        return;
    }
    for (int i = k + 1; i < (int)c.size(); i++) {
        use.push_back(i);
        pick_c(i);
        use.pop_back();
    }
}

int main() {
    input();
    cal_len();
    pick_c(-1);
    printf("%d", min);
}
