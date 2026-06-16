// https://www.acmicpc.net/problem/11365
// !밀비 급일

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char s[501];
    int t;
    while (true) {
        cin.getline(s, 500);
        if (strcmp(s, "END") == 0)
            break;
        t = strlen(s);
        for (int i = t - 1; i >= 0; i--)
            printf("%c", s[i]);
        printf("\n");
    }
}