// https://www.acmicpc.net/problem/18258
// 큐 2

#include <cstdio>
#include <queue>
#include <string.h>

std::queue<int> q;

void order(int i, int t) {
    int a;
    if (i == 0) {
        q.push(t);
        return;
    } else if (q.empty() and (i == 1 or i == 2 or i == 5))
        a = -1;
    else if (i == 1) {
        a = q.front();
    } else if (i == 2) {
        a = q.back();
    } else if (i == 3)
        a = q.size();
    else if (i == 4)
        a = q.empty();
    else {
        a = q.front();
        q.pop();
    }
    printf("%d\n", a);
}

int main() {
    int n, t;
    char s[6], ins[][6] = {"push", "front", "back", "size", "empty", "pop"};

    scanf("%d", &n);
    while (n--) {
        scanf("%s", s);
        for (int i = 0; i < 6; i++) {
            if (strcmp(s, ins[i]) == 0) {
                if (i == 0)
                    scanf("%d", &t);
                order(i, t);
                break;
            }
        }
    }
}