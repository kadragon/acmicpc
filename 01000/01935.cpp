// https://www.acmicpc.net/problem/1935
// 후위 표기식2

#include <cstdio>
#include <stack>

int main() {
    std::stack<double> s;
    int n, d[26];
    double a, b;
    char t[101];
    scanf("%d\n%s", &n, t);
    for (int i = 0; i < n; i++)
        scanf("%d", d + i);

    for (int i = 0; t[i]; i++) {
        if (t[i] >= 65)
            s.push((double)d[t[i] - 'A']);
        else {
            b = s.top();
            s.pop();
            a = s.top();
            s.pop();
            if (t[i] == '+')
                s.push(a + b);
            else if (t[i] == '-')
                s.push(a - b);
            else if (t[i] == '*')
                s.push(a * b);
            else
                s.push(a / b);
        }
    }
    printf("%.2f", s.top());
}
