//
// Created by kangdonguk on 2020/06/08.
//

#include <stdio.h>

int p, i, a[26];

int main() {
    char s[251];

    while (true) {
        scanf("%[^\n]s", s);
        getchar();
        if (s[0] == '#') break;
        for (i = 0, p = 0; s[i]; i++) {
            if (s[i] >= 'a' and s[i] <= 'z')
                a[s[i] - 'a'] = 1;
            else if (s[i] >= 'A' and s[i] <= 'Z')
                a[s[i] - 'A'] = 1;
        }
        for (i = 0; i < 26; i++)
            if (a[i])
                p++, a[i] = 0;

        printf("%d\n", p);
    }
}
