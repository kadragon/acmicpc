// https://www.acmicpc.net/problem/4493
// 가위 바위 보?

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, a, b;
    char p, q;
    cin >> t;
    while (t--) {
        a = b = 0;
        cin >> n;

        while (n--) {
            cin >> p >> q;
            if (p == q)
                continue;

            if (p == 'R')
                q == 'P' ? b++ : a++;
            else if (p == 'P')
                q == 'R' ? a++ : b++;
            else
                q == 'R' ? b++ : a++;
        }

        printf("%s\n", a == b ? "TIE" : a > b ? "Player 1" : "Player 2");
    }
}