// https://www.acmicpc.net/problem/5397
// 키로거

#include <cstdio>
#include <deque>

int main() {
    int t, p;
    char s[1000001];

    scanf("%d", &t);
    while (t--) {
        p = 0;
        std::deque<char> v;
        scanf("%s", s);
        for (int i = 0; s[i]; i++) {
            if (s[i] == '<') {
                if (p > 0)
                    p--;
            } else if (s[i] == '>') {
                if (p < (int)v.size())
                    p++;
            } else if (s[i] == '-') {
                if (p > 0)
                    v.erase(v.begin() + --p);
            } else
                v.insert(v.begin() + p++, s[i]);
        }

        for (int i = 0; i < (int)v.size(); i++)
            printf("%c", v[i]);
        printf("\n");
    }
}
