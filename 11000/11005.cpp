// https://www.acmicpc.net/problem/11005
// 진법 변환 2

#include <cstdio>
#include <stack>

std::stack<int> st;

int main() {
    char s[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n, d;
    scanf("%d %d", &n, &d);
    if (n == 0)
        st.push(0);

    while (n) {
        st.push(n % d);
        n /= d;
    }

    while (!st.empty()) {
        printf("%c", s[st.top()]);
        st.pop();
    }
}