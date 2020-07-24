// https://www.acmicpc.net/problem/1431
// 시리얼 번호

#include <algorithm>
#include <cstdio>
#include <string.h>
#include <vector>

using namespace std;

typedef struct STRINGINFO {
    char serial[51];
    int len, s;
} info;

info d[1001];

bool compare(info a, info b) {
    return a.len != b.len ? a.len < b.len : a.s != b.s ? a.s < b.s : strcmp(a.serial, b.serial) < 0;
}

int main() {
    int n, q;
    char t;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", d[i].serial);
        d[i].len = strlen(d[i].serial), q = 0;
        for (int j = 0; j < d[i].serial[j]; j++) {
            t = d[i].serial[j];
            if (t >= '1' and t <= '9')
                q += t - '0';
        }
        d[i].s = q;
    }

    sort(d, d + n, compare);

    for (int i = 0; i < n; i++)
        printf("%s\n", d[i].serial);
}
