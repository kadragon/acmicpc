//
// Created by kangdonguk on 2020/07/02.
//

// https://www.acmicpc.net/problem/1092
// 배

#include <cstdio>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m, p = 0, t;
    vector<int> a, b;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &t);
        a.push_back(t);
    }

    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &t);
        b.push_back(t);
    }

    sort(a.begin(), a.end(), greater<>());
    sort(b.begin(), b.end(), greater<>());

    if (a[0] < b[0])
        p = -1;
    else {
        while (!b.empty()) {
            while (a.back() < b.back())
                a.pop_back();

            int in = 0;
            for (int i = 0; i < (int) b.size(); i++) {
                if (in == (int) a.size()) break;
                if (a[in] >= b[i]) {
                    b.erase(b.begin() + i);
                    in++, i--;
                }
            }
            p++;
        }
    }

    printf("%d", p);
}

/*
 * Reference
 * https://peanut2016.tistory.com/189
 */