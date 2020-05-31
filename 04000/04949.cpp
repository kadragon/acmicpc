//
// Created by kangdonguk on 2020/04/14.
//

// https://www.acmicpc.net/problem/4949
// 균형잡힌 세상

#include <stdio.h>

int main() {
    char s[102], k[102], l[] = ")]([";

    while (true) {
        scanf("%[^\n]s", s);
        getchar();

        if (s[0] == '.')
            break;

        int t = 0, ans = 1;

        for (int i = 0; s[i] && ans; i++) {
            if (s[i] == '(' or s[i] == '[')
                k[t++] = s[i];
            else
                for (int j = 0; j < 2; j++)
                    if (s[i] == l[j])
                        if (t > 0 and k[t - 1] == l[j + 2])
                            t--;
                        else {
                            ans = 0;
                            break;
                        }
        }
        printf("%s\n", ans == 0 or t != 0 ? "no" : "yes");

    }
}
