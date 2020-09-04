// https://www.acmicpc.net/problem/2992
// 크면서 작은 수

#include <algorithm>
#include <cstdio>
#include <string.h>

int main() {
    char s[7], t;
    scanf("%s", s);
    int l = strlen(s), min, ans = 0;

    for (int i = l - 2; i >= 0; i--) {
        min = i + 1;
        for (int j = i + 2; j < l; j++) {
            if (s[i] < s[j] and s[min] > s[j])
                min = j;
        }

        if (s[i] < s[min]) {
            t = s[i];
            s[i] = s[min];
            s[min] = t;

            std::sort(&s[i + 1], s + l);
            ans = 1;
            break;
        }
    }

    printf("%s", ans ? s : "0");
}

/*
 * Reference
 * http://www.cplusplus.com/reference/algorithm/next_permutation/
*/