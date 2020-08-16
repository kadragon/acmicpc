// https://www.acmicpc.net/problem/2386
// 도비의 영어 공부

#include <iostream>

int main() {
    char s[255];

    while (true) {
        std::cin.getline(s, 255);
        if (s[0] == '#')
            break;
        int a = 0;
        for (int i = 2; s[i]; i++)
            if (s[0] == s[i] or (s[0] - 32) == s[i])
                a++;

        printf("%c %d\n", s[0], a);
    }
}
