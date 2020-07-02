//
// Created by kangdonguk on 2020/07/02.
//

// https://www.acmicpc.net/problem/11003
// 부분 문자열

#include <cstdio>
#include <deque>

using namespace std;

int main() {
    int n, l, t;
    deque<pair<int, int>> d;
    scanf("%d %d", &n, &l);

    for (int i = 0; i < n; i++) {
        scanf("%d", &t);

        while (!d.empty() and d.back().second > t)
            d.pop_back();

        d.emplace_back(i, t);

        while (d.front().first < i - l + 1)
            d.pop_front();

        printf("%d ", d.front().second);
    }
}

/*
 * Reference
 * https://github.com/encrypted-def/BOJ/blob/master/11003.cpp
 */
