//
// Created by kangdonguk on 2020/03/01.
//

// https://www.acmicpc.net/problem/1316
// 그룹 단어 체커

#include <stdio.h>

char s[101];

int main(void) {
    int a, c[26], ans=0;
    scanf("%d", &a);

    while(a--) {
        bool flag = true;
        scanf("%s", s);
        for (int i=0; i<26; i++)
            c[i] = -1;

        for (int i=0; s[i]; i++) {
            if (c[s[i]-97] == -1)
                c[s[i]-97] = i;
            else if (c[s[i]-97]+1 != i) {
                flag = false;
                continue;
            } else
                c[s[i]-97] = i;
        }
        if (flag)
            ans++;
    }

    printf("%d", ans);

    return 0;
}