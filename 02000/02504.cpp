// https://www.acmicpc.net/problem/2504
// 괄호의 값

#include <cstdio>
#include <stack>

std::stack<char> st;

int main() {
    char s[31];
    int a = 0, t = 1, p = 0;
    scanf("%s", s);

    for (int i = 0; s[i] and !p; i++) {
        if (s[i] == '(' or s[i] == '[') {
            if (s[i] == '(')
                t *= 2;
            if (s[i] == '[')
                t *= 3;
            st.push(s[i]);
        } else if (st.empty() or (s[i] == ')' and st.top() != '(') or (s[i] == ']' and st.top() != '['))
            p = 1;
        else {
            if (s[i] == ')') {
                if (s[i - 1] == '(')
                    a += t;
                st.pop();
                t /= 2;
            } else if (s[i] == ']') {
                if (s[i - 1] == '[')
                    a += t;
                st.pop();
                t /= 3;
            }
        }
    }

    printf("%d", p or !st.empty() ? 0 : a);
}

/* Reference
 * https://jaimemin.tistory.com/820
 */