// https://www.acmicpc.net/problem/4470
// 줄번호

#include <iostream>

using namespace std;

int main() {
    int n;
    char s[51];
    scanf("%d\n", &n);
    for (int i = 1; i <= n; i++) {
        cin.getline(s, 51);
        printf("%d. %s\n", i, s);
    }
}
